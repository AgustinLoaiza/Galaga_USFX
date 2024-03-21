// Fill out your copyright notice in the Description page of Project Settings.


#include "Cometa.h"

// Sets default values
ACometa::ACometa()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Cometa(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'")); 
	// Create the mesh component
	mallaCometa = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cometa"));
	mallaCometa->SetStaticMesh(Cometa.Object); 
	mallaCometa->SetupAttachment(RootComponent); 
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
	velocidad = 0.7;  
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z)); 
}

void ACometa::Desaparecer()
{

}
