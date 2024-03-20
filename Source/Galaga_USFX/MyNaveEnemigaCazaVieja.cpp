// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaCazaVieja.h"

void AMyNaveEnemigaCazaVieja::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

AMyNaveEnemigaCazaVieja::AMyNaveEnemigaCazaVieja()
{
	posicion = FVector(1200, -1000, 250);
	//aqui también le pongo la mesh
}

void AMyNaveEnemigaCazaVieja::Mover(float DeltaTime)
{
	ANaveEnemigaCaza::Mover(DeltaTime);
	/*velocidad = 3;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y - velocidad, GetActorLocation().Z));
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}*/
}

void AMyNaveEnemigaCazaVieja::Disparar()
{
}
void AMyNaveEnemigaCazaVieja::Destruirse()
{
}

