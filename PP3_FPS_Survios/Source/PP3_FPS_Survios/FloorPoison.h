// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorPoison.generated.h"

UCLASS(config = Game)
class PP3_FPS_SURVIOS_API AFloorPoison : public AActor
{
	GENERATED_BODY()

		//posion
		UPROPERTY();
		UStaticMeshComponent* Poison;
	
public:	
	// Sets default values for this actor's properties
	AFloorPoison();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
