// Fill out your copyright notice in the Description page of Project Settings.


#include "PP3_FPS_BaseWeapon.h"

// Sets default values
APP3_FPS_BaseWeapon::APP3_FPS_BaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	weaponType = WeaponType::PROJECTILE;
	maxAmmoOnPlayer = 20;
	ammoOnPlayer = 10;
	maxAmmoInClip = 1;
	ammoInClip = 1;
	reloadSpeed = 3.0f;
	timeBetweenShots = 0.3f;
}

// Called when the game starts or when spawned
void APP3_FPS_BaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APP3_FPS_BaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

