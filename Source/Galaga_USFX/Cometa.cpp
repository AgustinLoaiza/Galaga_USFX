// Fill out your copyright notice in the Description page of Project Settings.


#include "Cometa.h"

// Sets default values
ACometa::ACometa()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Cometa(TEXT("StaticMesh'/Game/Mallas/08e11a1ebfcb_glowing_galactic_cr.08e11a1ebfcb_glowing_galactic_cr'")); 
	// Create the mesh component
	mallaCometa = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cometa"));
	mallaCometa->SetStaticMesh(Cometa.Object); 
	mallaCometa->SetupAttachment(RootComponent);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	RootComponent = mallaCometa;  

}

void ACometa::GenerarCometa()
{

}

// Called when the game starts or when spawned
void ACometa::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACometa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ACometa::Mover(float DeltaTime)
{
	velocidad = 1;  
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z-velocidad)); 
}

void ACometa::Desaparecer()
{

}
