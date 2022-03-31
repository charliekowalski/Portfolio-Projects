// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PP3_FPS_BaseWeapon.h"
#include "PP3_FPS_Rifle.generated.h"

UCLASS()
class PP3_FPS_SURVIOS_API APP3_FPS_Rifle : public APP3_FPS_BaseWeapon
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APP3_FPS_Rifle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
