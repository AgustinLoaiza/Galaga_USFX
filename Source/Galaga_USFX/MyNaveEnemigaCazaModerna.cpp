// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaCazaModerna.h"

void AMyNaveEnemigaCazaModerna::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

AMyNaveEnemigaCazaModerna::AMyNaveEnemigaCazaModerna()
{
	posicion = FVector(1200, -1000, 250);
	//aqui también le pongo la mesh
}

void AMyNaveEnemigaCazaModerna::Mover(float DeltaTime)
{
	ANaveEnemigaCaza::Mover(DeltaTime);
	/*velocidad = 3;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y - velocidad, GetActorLocation().Z));
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}*/
}

void AMyNaveEnemigaCazaModerna::Disparar()
{
}
void AMyNaveEnemigaCazaModerna::Destruirse()
{
}


