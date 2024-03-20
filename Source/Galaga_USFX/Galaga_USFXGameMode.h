// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaCazaVieja;
class ANaveEnemigaCazaModerna;
class ANaveEnemigaEspia;
class ANaveEnemigaEspiaComun;
class ANaveEnemigaEspiaAvanzado;
class ANaveEnemigaNodriza;
class ANaveEnemigaNodrizaBasico;
class ANaveEnemigaNodrizaDroide;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaReabastecimientoC;
class ANaveEnemigaReabastecimientoG;
class ANaveEnemigaTransporte;
class ANaveEnemigaTransporteNormal;
class ANaveEnemigaTransporte3000;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();

public:
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;

	ANaveEnemigaCazaVieja* NaveEnemigaCazaVieja01; 
	ANaveEnemigaCazaModerna* NaveEnemigaCazaModerna01; 
	ANaveEnemigaEspiaComun* NaveEnemigaEspiaComun01;
	ANaveEnemigaEspiaAvanzado* NaveEnemigaEspiaAvanzado01;
	ANaveEnemigaNodrizaBasico* NaveEnemigaNodrizaBasico01;
	ANaveEnemigaNodrizaDroide* NaveEnemigaNodrizaDroide01;
	ANaveEnemigaReabastecimientoC* NaveEnemigaReabastecimientoC01;
	ANaveEnemigaReabastecimientoG* NaveEnemigaReabastecimientoG01;
	ANaveEnemigaTransporteNormal* NaveEnemigaTransporteNormal01;
	ANaveEnemigaTransporte3000* NaveEnemigaTransporte300001;

protected:
	virtual void BeginPlay() override;

public:

	void Tick(float DeltaTime) override;

	TArray <ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*>TANavesEnemigasCaza; //Estos punteros alamacenan direcciones de objetos de nave enemiga caza 
	TArray<ANaveEnemigaTransporte*>TANavesEnemigasTransporte;
	TArray<ANaveEnemigaEspia*>TANavesEnemigasEspia;

private:
	int TiempoTranscurrido = 0;

public:
	TMap<FVector, AActor*>Meteoros;
};



