// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
//clases hijas
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaTransporte.h"
//clases nietas
#include "MyNaveEnemigaCazaVieja.h"
#include "MyNaveEnemigaCazaModerna.h"
#include "MyNaveEnemigaEspiaComun.h"
#include "MyNaveEnemigaEspiaAvanzado.h"
#include "MyNaveEnemigaNodrizaBasico.h"
#include "MyNaveEnemigaNodrizaDroide.h"
#include "MyNaveEnemigaReabastecimientoC.h"
#include "MyNaveEnemigaReabastecimientoG.h"
#include "MyNaveEnemigaTransporteNormal.h"
#include "MyNaveEnemigaTransporte3000.h"



AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
}

void AGalaga_USFXGameMode::BeginPlay()
{

}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{

}

