// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupTest.h"


// Sets default values
APickupTest::APickupTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));


}

// Called when the game starts or when spawned
void APickupTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

