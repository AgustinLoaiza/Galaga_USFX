// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"
// Sets default values
ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Mallas/c70fffc35ceb_el_Alcon_Milenario_.c70fffc35ceb_el_Alcon_Milenario_'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	velocidad = 1;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}

void ANaveEnemigaEspia::Destruirse()
{
}

void ANaveEnemigaEspia::Escapar()
{
}

// Called every frame
void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


