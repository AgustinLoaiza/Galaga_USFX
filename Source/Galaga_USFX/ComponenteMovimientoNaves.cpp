// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteMovimientoNaves.h"

// Sets default values for this component's properties
UComponenteMovimientoNaves::UComponenteMovimientoNaves()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	MovimientoComun = 2;

	limiteInferiorX = -1600.0f;
}


// Called when the game starts
void UComponenteMovimientoNaves::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteMovimientoNaves::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	AActor* Parent = GetOwner();
	if (Parent)
	{
		// Get the current location of the owner
		FVector CurrentLocation = Parent->GetActorLocation();

		float MovimientoComunX=MovimientoComun* DeltaTime;

		// Calculate the new position based on the movement speed
		//FVector NewLocation = CurrentLocation + FVector(-MovimientoComun, 0.0f, 0.0f * DeltaTime);
		FVector NewLocation = FVector(CurrentLocation.X - MovimientoComun, CurrentLocation.Y, CurrentLocation.Z);
		// Set the new position
		Parent->SetActorLocation(NewLocation);

		//Limite del mapa
		if (NewLocation.X < limiteInferiorX)
		{
			Parent->SetActorLocation(FVector(-300.0f, CurrentLocation.Y, CurrentLocation.Z)); 
		}
	}
}

