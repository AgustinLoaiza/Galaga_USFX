// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cometa.generated.h"

UCLASS()
class GALAGA_USFX_API ACometa : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaCometa;
	
protected:
	int tiempoPermanencia;
	int tipoCometa;

	float velocidad;
	FVector posicion;

public:
	FORCEINLINE int GetTiempoPermanencia() const { return tiempoPermanencia; }
	FORCEINLINE int GetTipoCometa() const { return tipoCometa; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	FORCEINLINE void SetTiempoPermanencia(int _tiempoPermanencia) { tiempoPermanencia = _tiempoPermanencia; }
	FORCEINLINE void SetTipoCometa(int _tipoCometa) { tipoCometa = _tipoCometa; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

	void GenerarCometa();

public:	
	// Sets default values for this actor's properties
	ACometa();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime);
	virtual void Desaparecer();

};
