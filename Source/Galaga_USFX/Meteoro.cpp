// Fill out your copyright notice in the Description page of Project Settings.


#include "Meteoro.h"

// Sets default values
AMeteoro::AMeteoro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'")); 
	// Create the mesh component
	mallaMeteoro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meteoro")); 
	mallaMeteoro->SetStaticMesh(ShipMesh.Object);
	mallaMeteoro->SetupAttachment(RootComponent); 
	RootComponent = mallaMeteoro; 

}

void AMeteoro::GenerarMeteoro()
{
	
}

// Called when the game starts or when spawned
void AMeteoro::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMeteoro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMeteoro::Mover(float DeltaTime)
{
	velocidad = 0.9;
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y - velocidad, GetActorLocation().Z));
}

void AMeteoro::Destruirse()
{

}

