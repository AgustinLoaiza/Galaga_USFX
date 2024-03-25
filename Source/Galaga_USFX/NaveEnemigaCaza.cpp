// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Mallas/e1d3aedca958_caza_estelar_StarWa.e1d3aedca958_caza_estelar_StarWa'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));

	PrimaryActorTick.bCanEverTick = true;
}


void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	velocidad = 1.5;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}


void ANaveEnemigaCaza::Disparar() {

}

void ANaveEnemigaCaza::Destruirse()
{
}


