// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponenteMovimientoNaves.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_API UComponenteMovimientoNaves : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UComponenteMovimientoNaves();

	UPROPERTY()
	//Definimos la velocidad de las naves
	float MovimientoComun;

	float limiteInferiorX;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
