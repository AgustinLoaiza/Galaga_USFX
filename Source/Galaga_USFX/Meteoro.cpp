// Fill out your copyright notice in the Description page of Project Settings.


#include "Meteoro.h"

// Sets default values
AMeteoro::AMeteoro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Mallas/24d9db5338b2_meteoro__3d_asset_0.24d9db5338b2_meteoro__3d_asset_0'")); 
	// Create the mesh component
	mallaMeteoro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meteoro")); 
	mallaMeteoro->SetStaticMesh(ShipMesh.Object);
	mallaMeteoro->SetupAttachment(RootComponent);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
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
	Mover(DeltaTime);

}

void AMeteoro::Mover(float DeltaTime)
{
	velocidad = 3;
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y ,GetActorLocation().Z-velocidad));
}

void AMeteoro::Destruirse()
{

}

