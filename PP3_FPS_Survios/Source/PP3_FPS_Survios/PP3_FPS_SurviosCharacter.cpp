// Copyright Epic Games, Inc. All Rights Reserved.

#include "PP3_FPS_SurviosCharacter.h"
#include "PP3_FPS_SurviosProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// APP3_FPS_SurviosCharacter

APP3_FPS_SurviosCharacter::APP3_FPS_SurviosCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;
}

void APP3_FPS_SurviosCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	primaryWeapon->GetSkeletalMesh()->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void APP3_FPS_SurviosCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APP3_FPS_SurviosCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &APP3_FPS_SurviosCharacter::StopFire);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &APP3_FPS_SurviosCharacter::ReloadWeapon);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &APP3_FPS_SurviosCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &APP3_FPS_SurviosCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APP3_FPS_SurviosCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APP3_FPS_SurviosCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APP3_FPS_SurviosCharacter::LookUpAtRate);
}

void APP3_FPS_SurviosCharacter::StartFire()
{
	switch (primaryWeapon->GetWeaponType())
	{
		case WeaponType::PROJECTILE:
		{
			FireShot();
		}
		case WeaponType::HITSCAN:
		{
			FireShot();
			GetWorldTimerManager().SetTimer(Timer_Reload, this, &APP3_FPS_SurviosCharacter::FireShot, primaryWeapon->GetTimeBetweenShots(), true);
		}
	}
}

void APP3_FPS_SurviosCharacter::FireShot()
{

	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			//checks if weapon exist
			if (primaryWeapon)
			{
				//check the player has the ammo to fire
				if (primaryWeapon->GetAmmoInClip() > 0)
				{

					const FRotator SpawnRotation = GetControlRotation();
					// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
					const FVector SpawnLocation = ((primaryWeapon->GetMuzzleLocation() != nullptr) ? primaryWeapon->GetMuzzleLocation()->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(primaryWeapon->GetGunOffset());

					switch (primaryWeapon->GetWeaponType())
					{
					case WeaponType::PROJECTILE:
					{
						//Set Spawn Collision Handling Override
						FActorSpawnParameters ActorSpawnParams;
						ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

						// spawn the projectile at the muzzle
						World->SpawnActor<APP3_FPS_SurviosProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
						break;
					}
					case WeaponType::HITSCAN:
					{
						FHitResult hit;
						
						World->LineTraceSingleByChannel();
						//Set Spawn Collision Handling Override
						FActorSpawnParameters ActorSpawnParams;
						ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

						// spawn the projectile at the muzzle
						World->SpawnActor<APP3_FPS_SurviosProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
						break;
					}
					}

					//removes fired bullet from clip
					int currentAmmo = primaryWeapon->GetAmmoInClip();
					primaryWeapon->SetAmmoInClip(currentAmmo -= 1);
				}
				else if (primaryWeapon->GetAmmoOnPlayer() > 0) //make sure that we still have ammo on the player to use
				{
					GetWorldTimerManager().SetTimer(Timer_Reload, this, &APP3_FPS_SurviosCharacter::ReloadWeapon, primaryWeapon->GetReloadSpeed(), false);
				}
			}
		}
	}


	// try and play the sound if specified
	if (FireSound != nullptr || primaryWeapon->GetAmmoInClip() <= 0)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != nullptr || primaryWeapon->GetAmmoInClip() <= 0)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void APP3_FPS_SurviosCharacter::StopFire()
{
	switch (primaryWeapon->GetWeaponType())
	{
		case WeaponType::PROJECTILE:
		{
			FireShot();
		}
		case WeaponType::HITSCAN:
		{

		}
	}
}

void APP3_FPS_SurviosCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void APP3_FPS_SurviosCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		FireShot();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void APP3_FPS_SurviosCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void APP3_FPS_SurviosCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void APP3_FPS_SurviosCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void APP3_FPS_SurviosCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void APP3_FPS_SurviosCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APP3_FPS_SurviosCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool APP3_FPS_SurviosCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &APP3_FPS_SurviosCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &APP3_FPS_SurviosCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &APP3_FPS_SurviosCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}

void APP3_FPS_SurviosCharacter::ReloadWeapon()
{
	if (primaryWeapon)
	{
		if (primaryWeapon->GetAmmoInClip() != primaryWeapon->GetMaxAmmoInClip())
		{
			if (primaryWeapon->GetAmmoOnPlayer() - (primaryWeapon->GetMaxAmmoInClip() - primaryWeapon->GetAmmoInClip()) >= 0)
			{
				int newAmmo = primaryWeapon->GetAmmoOnPlayer() - (primaryWeapon->GetMaxAmmoInClip() - primaryWeapon->GetAmmoInClip());
				primaryWeapon->SetAmmoOnPlayer(newAmmo);
				primaryWeapon->SetAmmoInClip(primaryWeapon->GetMaxAmmoInClip());
			}
			else
			{
				int newAmmo = primaryWeapon->GetAmmoInClip() + primaryWeapon->GetAmmoOnPlayer();
				primaryWeapon->SetAmmoInClip(newAmmo);
				primaryWeapon->SetAmmoOnPlayer(0);
			}
			GetWorldTimerManager().ClearTimer(Timer_Reload);
		}
	}
}
