// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorPoison.h"

// Sets default values
AFloorPoison::AFloorPoison()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Poison = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	UStaticMesh* cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	Poison->SetStaticMesh(cubeMesh);

	RootComponent = Poison;

}

// Called when the game starts or when spawned
void AFloorPoison::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloorPoison::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

