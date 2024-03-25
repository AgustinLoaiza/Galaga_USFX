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
//Meteoros y Cometas
#include "Meteoro.h"
#include "Cometa.h"
//Se incluye el componente de actor
#include "ComponenteMovimientoNaves.h"


AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();


}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	//Las naves mas ligeras estaran adelante
	FVector ubicacionInicialNavesCazasViejas = FVector(-300.0f, -1200.0f, 250.0f);
	FVector ubicacionInicialNavesCazasModernas = FVector(-300.0f, -1000.0f, 250.0f);
	FVector ubicacionInicialNavesEspiasComunes = FVector(-300.0f, -800.0f, 250.0f);
	FVector ubicacionInicialNavesEspiasAvanzados = FVector(-300.0f, -600.0f, 250.0f);

	//Las naves mas pesadas estaran detras
	FVector ubicacionInicialNavesNodrizasBasicos = FVector(-100.0f, -1200.0f, 250.0f);
	FVector ubicacionInicialNavesNodrizasDroides = FVector(-100.0f, -1000.0f, 250.0f);
	FVector ubicacionInicialNavesReabastecimientosC = FVector(-100.0f, -800.0f, 250.0f);
	FVector ubicacionInicialNavesReabastecimientosG = FVector(-100.0f, -600.0f, 250.0f);
	FVector ubicacionInicialNavesTransportesNormales = FVector(-100.0f, -400.0f, 250.0f);
	FVector ubicacionInicialNavesTransportes3000 = FVector(-100.0f, -200.0f, 250.0);

	FRotator rotacionNave = FRotator(0.0f, 180.0f, 0.0f);
	FRotator rotacionMeteoro = FRotator(0.0f, 0.0f, 0.0f);

	//Generador de naves por medio de ciclos
	UWorld* const World = GetWorld();

	if (World != nullptr)
	{
		//Naves ligeras
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesCazasViejas.X, ubicacionInicialNavesCazasViejas.Y + i * 2200, ubicacionInicialNavesCazasViejas.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesCazasModernas.X, ubicacionInicialNavesCazasModernas.Y + i * 1800, ubicacionInicialNavesCazasModernas.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesEspiasComunes.X, ubicacionInicialNavesEspiasComunes.Y + i * 1400, ubicacionInicialNavesEspiasComunes.Z);
			ANaveEnemigaEspia* NaveEnemigaEspiaTemporal = World->SpawnActor<ANaveEnemigaEspia>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaEspiaTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesEspiasAvanzados.X, ubicacionInicialNavesEspiasAvanzados.Y + i * 1000, ubicacionInicialNavesEspiasAvanzados.Z);
			ANaveEnemigaEspia* NaveEnemigaEspiaTemporal = World->SpawnActor<ANaveEnemigaEspia>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaEspiaTemporal);
		}

		//Naves pesadas
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesNodrizasBasicos.X, ubicacionInicialNavesNodrizasBasicos.Y + i * 2200, ubicacionInicialNavesNodrizasBasicos.Z);
			ANaveEnemigaNodriza* NaveEnemigaNodrizaTemporal = World->SpawnActor<ANaveEnemigaNodriza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaNodrizaTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesNodrizasDroides.X, ubicacionInicialNavesNodrizasDroides.Y + i * 1800, ubicacionInicialNavesNodrizasDroides.Z);
			ANaveEnemigaNodriza* NaveEnemigaNodrizaTemporal = World->SpawnActor<ANaveEnemigaNodriza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaNodrizaTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesReabastecimientosC.X, ubicacionInicialNavesReabastecimientosC.Y + i * 1400, ubicacionInicialNavesReabastecimientosC.Z);
			ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimientoTemporal = World->SpawnActor<ANaveEnemigaReabastecimiento>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaReabastecimientoTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesReabastecimientosG.X, ubicacionInicialNavesReabastecimientosG.Y + i * 1000, ubicacionInicialNavesReabastecimientosG.Z);
			ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimientoTemporal = World->SpawnActor<ANaveEnemigaReabastecimiento>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaReabastecimientoTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesTransportesNormales.X, ubicacionInicialNavesTransportesNormales.Y + i * 600, ubicacionInicialNavesTransportesNormales.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
		}
		for (int i = 0; i < 2; i++) {
			FVector PosicionNaveActual = FVector(ubicacionInicialNavesTransportes3000.X, ubicacionInicialNavesTransportes3000.Y + i * 200, ubicacionInicialNavesTransportes3000.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
		}

		// Laboratorio, implementacion del TMap generando meteoros y cometas

		//Insertar Meteoros
		for (int i = 0; i < 5; i++)
		{
			FVector SpawnLocation = FVector(FMath::RandRange(-600.0f, -500.0f), FMath::RandRange(-1000.0f, 1000.0f), 1500.0f);
			AMeteoro* NewMeteoro = GetWorld()->SpawnActor<AMeteoro>(AMeteoro::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			MeteorosCometas.Add(SpawnLocation, NewMeteoro);
		}

		//Insertar Cometas en el TMap
		for (int i = 0; i < 3; i++)
		{
			FVector SpawnLocation = FVector(FMath::RandRange(-400.0f, 0.0f), FMath::RandRange(-1000.0f, 1000.0f), 1500.0f);
			ACometa* NewObstacle = GetWorld()->SpawnActor<ACometa>(ACometa::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			MeteorosCometas.Add(SpawnLocation, NewObstacle);
		}
		TiempoTranscurrido = 0;
	}
}

void AGalaga_USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

	//if (TiempoTranscurrido >= 100)
	//{
		//int numeroEnemigo = FMath::RandRange(0, 9);
		//if (GEngine)
		//{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));

		//}
		//TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	//}
}


	

