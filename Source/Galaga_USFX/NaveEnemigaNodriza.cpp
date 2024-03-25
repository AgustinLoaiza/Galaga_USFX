// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

// Sets default values
ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Mallas/1710aa07ae28_nave_espacial_grand.1710aa07ae28_nave_espacial_grand'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called every frame
void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
	velocidad = 0.5;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));

}


void ANaveEnemigaNodriza::Disparar() {

}

void ANaveEnemigaNodriza::Destruirse()
{
}

void ANaveEnemigaNodriza::Escapar()
{
}




