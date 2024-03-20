// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Meteoro.generated.h"

UCLASS()
class GALAGA_USFX_API AMeteoro : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true")) 
	UStaticMeshComponent* mallaMeteoro; 

protected:
	float danio;
	float tiempoGeneracion;
	float velocidad;

	FVector posicion;

public:
	
FORCEINLINE float GetDanio() const { return danio; }
FORCEINLINE float GetTiempoGeneracion() const { return tiempoGeneracion; }
FORCEINLINE FVector GetPosicion() const { return posicion; }

FORCEINLINE void SetDanio(float _danio) { danio = _danio; }
FORCEINLINE void SetTiempoGeneracion(float _tiempoGeneracion) { tiempoGeneracion = _tiempoGeneracion; }
FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

void GenerarMeteoro();
	
public:	
	// Sets default values for this actor's properties
	AMeteoro();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();

};
