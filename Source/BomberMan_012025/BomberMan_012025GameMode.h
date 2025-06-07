// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once


#include "CoreMinimal.h"
#include "AE_NaveEnemiga.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan_012025GameMode.generated.h"
//para el factoryMethod
class ABloqueFactory;
class ABloque;
// para el builder
class ADirectorLaberinto;
class AConstructorLaberintoConcreto;
class UMaestroLaberintoProducto;


UCLASS(minimalapi)
class ABomberMan_012025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_012025GameMode();

public: 
	virtual void BeginPlay() override;

public:
	// Declarar la posición del siguiente bloque
	FVector posicionSiguienteBloque = FVector(1000.0f, 500.0f, 20.0f);

	// Declarar un mapa de bloques como un array bidimensional
	
	float XInicial = 500.00f;
	float YInicial = 500.00f;
	float AnchoBloque = 100.0f;
	float LargoBloque = 100.0f;
	ABloque* BloqueActual = nullptr;
	// Declarar un array de punteros a objetos de tipo BloqueMadera
	TArray<ABloque*> aBloques;
	
	FTimerHandle tHDestruirBloques;

	//void SpawnBloques();
//	void SpawnBloque(FVector posicion, int32 tipoBloque);
//	void DestruirBloque();

private: 

// prueba factoryMethod

	UPROPERTY()
	ABloqueFactory* AceroFactoryInstance;
	UPROPERTY()
	ABloqueFactory* LadrilloFactoryInstance;

	UPROPERTY()
	AAE_NaveEnemiga* pepe;



	//final factoryMethod

	// prueba builder

private:
	UPROPERTY()
	ADirectorLaberinto* DirectorDelJuego;

	UPROPERTY()
	AConstructorLaberintoConcreto* ConstructorDelJuego;

	UPROPERTY()
	UMaestroLaberintoProducto* LaberintoActual; // Para mantener una referencia al laberinto construido

	//finala builder
};

/*
for (AActor* bloque : aBloques)
{
	if (bloque)
	{
		// Haz algo con cada bloque
		bloque->Destroy(); // Ejemplo: destruir el bloque
	}
}*/

/*
if (aBloques.Num() > 0)
{
	AActor* primerBloque = aBloques[0]; // Obtén el primer bloque
	if (primerBloque)
	{
		// Realiza operaciones con el bloque
		primerBloque->SetActorLocation(FVector(100.0f, 100.0f, 100.0f));
	}
}
*/

