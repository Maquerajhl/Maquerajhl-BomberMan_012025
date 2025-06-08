// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once


#include "CoreMinimal.h"
//#include "AE_NaveEnemiga.h"
#include "CieloNoche.h"
#include "GameFramework/GameModeBase.h"
#include "PrototypeRegistry.h"
#include "BombermanGameFlowFacade.h" //para el facade
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

protected:
	virtual void BeginPlay() override;

public:

	FVector posicionSiguienteBloque = FVector(1000.0f, 500.0f, 20.0f);


	
	float XInicial = 500.00f;
	float YInicial = 500.00f;
	float AnchoBloque = 100.0f;
	float LargoBloque = 100.0f;
	ABloque* BloqueActual = nullptr;
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

//	UPROPERTY()
//	AAE_NaveEnemiga* pepe;

	UPROPERTY()
	ACieloNoche* CieloNoche;



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

public:

	void SpawnCieloNoche();

	//prototypeRegistry

	UPROPERTY()
	UPrototypeRegistry* MyPrototypeRegistry;

	// Puedes comentar o eliminar NavePrototypesToRegister si no vas a usar el editor para llenarlo
	// UPROPERTY(EditAnywhere, Category = "Prototype Setup")
	// TMap<FString, TSubclassOf<AActor>> NavePrototypesToRegister;

	// --- ¡AÑADE ESTO para asegurar que los Blueprints sean "cocinados"! ---
	// Incluso si no se usa directamente en C++, Unreal lo verá como una referencia.
	UPROPERTY()
	TArray<TSoftClassPtr<AActor>> ReferencedPrototypeClasses; // Usar TSoftClassPtr es mejor para referencias que no se cargan de inmediato


private:
	UFUNCTION()
	void SpawnExampleNaves();

public:
	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void PlayerDied();

	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void ReportEnemyKilled();

private:
	UPROPERTY()
	UBombermanGameFlowFacade* GameFlowFacade;

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
	AActor* primerBloque = aBloques[0]; // Obt�n el primer bloque
	if (primerBloque)
	{
		// Realiza operaciones con el bloque
		primerBloque->SetActorLocation(FVector(100.0f, 100.0f, 100.0f));
	}
}
*/

