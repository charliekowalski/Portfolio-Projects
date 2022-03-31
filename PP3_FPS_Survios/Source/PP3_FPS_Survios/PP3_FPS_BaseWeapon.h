// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PP3_FPS_BaseWeapon.generated.h"

//The type of weapon
UENUM(BlueprintType)
enum class WeaponType : uint8
{
	DEFAULT		UMETA(DisplayName = "Default"),
	PROJECTILE	UMETA(DisplayName = "Projectile"),
	HITSCAN		UMETA(DisplayName = "Hitscan"),
};

UCLASS()
class PP3_FPS_SURVIOS_API APP3_FPS_BaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APP3_FPS_BaseWeapon();

	//The weapons Skeleton mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mesh)
		USceneComponent* FP_MuzzleLocation;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector GunOffset;

	//The current type of weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		WeaponType weaponType;

	//The maxuimum ammout of ammo the player can carry
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int maxAmmoOnPlayer;

	//The current ammout of ammo on the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int ammoOnPlayer;

	//The maxuimum ammout of ammo the guns clip can carry
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int maxAmmoInClip;

	//The current ammout in the clip
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		int ammoInClip;

	//The reload speed of the gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		float reloadSpeed;

	//The reload speed of the gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
		float timeBetweenShots;

	USkeletalMeshComponent* GetSkeletalMesh() const { return FP_Gun; };
	void SetSkeletonMesh(USkeletalMeshComponent* newSkeletonMesh) { FP_Gun = newSkeletonMesh; };

	USceneComponent* GetMuzzleLocation() const { return FP_MuzzleLocation; };
	void SetMuzzleLocation(USceneComponent* newMuzzleLocation) { FP_MuzzleLocation = newMuzzleLocation; };

	FVector GetGunOffset() { return GunOffset; };
	void SetGunOffset(FVector newGunOffset) { GunOffset = newGunOffset; };

	WeaponType GetWeaponType() { return weaponType; };
	void SetWeaponType(WeaponType newWeaponType) { weaponType = newWeaponType; };

	int GetMaxAmmoOnPlayer() { return maxAmmoOnPlayer; };
	void SetMaxAmmoOnPlayer(int newMaxAmmoOnPlayer) { maxAmmoOnPlayer = newMaxAmmoOnPlayer; };

	int GetAmmoOnPlayer() { return ammoOnPlayer; };
	void SetAmmoOnPlayer(int newAmmoOnPlayer) { ammoOnPlayer = newAmmoOnPlayer; };

	int GetMaxAmmoInClip() { return maxAmmoInClip; };
	void SetMaxAmmoInClip(int newMaxAmmoInClip) { maxAmmoInClip = newMaxAmmoInClip; };

	int GetAmmoInClip() { return ammoInClip; };
	void SetAmmoInClip(int newAmmoInClip) { ammoInClip = newAmmoInClip; };

	float GetReloadSpeed() { return reloadSpeed; };
	void SetReloadSpeed(float newReloadSpeed) { reloadSpeed = newReloadSpeed; }

	float GetTimeBetweenShots() { return timeBetweenShots; };
	void SetTimeBetweenShots(float newTimeBetweenShots) { timeBetweenShots = newTimeBetweenShots; };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
