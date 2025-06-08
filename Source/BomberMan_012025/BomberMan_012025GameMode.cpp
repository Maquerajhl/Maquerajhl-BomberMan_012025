// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025GameMode.h"
#include "BomberMan_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "BloqueBurbuja.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "FabricaBloques.h"
#include "CieloNoche.h"
#include "Math/UnrealMathUtility.h"

//factoryMethod

#include "BloqueAceroFactory.h" 
#include "BloqueLadrilloFactory.h"
#include "Bloque.h"

//AAE_NaveEnemiga
#include "AE_NaveEnemiga.h"

//builder

#include "DirectorLaberinto.h"
#include "ConstructorLaberintoConcreto.h"
#include "MaestroLaberintoProducto.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

//prototype
#include "UObject/UObjectGlobals.h" 
#include "UObject/SoftObjectPtr.h"
#include "BombermanGameFlowFacade.h" // Asegúrate de tener este include

ABomberMan_012025GameMode::ABomberMan_012025GameMode()
{
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }

    //prototypr
    MyPrototypeRegistry = CreateDefaultSubobject<UPrototypeRegistry>(TEXT("NavePrototypeRegistry"));

    // Para asegurar que los Blueprints se cocinen (aunque no los carguemos aquí)
    ReferencedPrototypeClasses.Add(TSoftClassPtr<AActor>(FSoftObjectPath(TEXT("/Game/Blueprints/BP_NaveEnemiga_Lenta.BP_NaveEnemiga_Lenta_C"))));
    ReferencedPrototypeClasses.Add(TSoftClassPtr<AActor>(FSoftObjectPath(TEXT("/Game/Blueprints/BP_NaveEnemiga_Rapida.BP_NaveEnemiga_Rapida_C"))));

    // Inicialización del GameFlowFacade
    GameFlowFacade = nullptr;
}

void ABomberMan_012025GameMode::BeginPlay()
{
    Super::BeginPlay();

    // Crear e inicializar la instancia del facade.
    GameFlowFacade = NewObject<UBombermanGameFlowFacade>(this);
    if (GameFlowFacade)
    {
        GameFlowFacade->Initialize(this);
        GameFlowFacade->StartGameRound();
    }

    // prototype prueba 1
    if (MyPrototypeRegistry)
    {
        UE_LOG(LogTemp, Log, TEXT("MyPrototypeRegistry es v�lido. Procediendo a cargar prototipos."));

        struct FPrototypeEntry { FString Key; FString Path; };
        TArray<FPrototypeEntry> PrototypesToLoad = {
            { TEXT("Lenta"), TEXT("/Game/nave/BP_NaveEnemiga_Lenta.BP_NaveEnemiga_Lenta_C") },
            { TEXT("Rapida"), TEXT("/Game/nave/BP_NaveEnemiga_Rapida.BP_NaveEnemiga_Rapida_C") },
        };


        for (const auto& Entry : PrototypesToLoad)
        {
            UClass* PrototypeClass = LoadClass<AActor>(nullptr, *Entry.Path);
            if (PrototypeClass)
            {
                // Aseg�rate que la clase implementa la interfaz
                if (PrototypeClass->ImplementsInterface(UIEnemigoPrototype::StaticClass()))
                {
                    MyPrototypeRegistry->PrototypeClasses.Add(Entry.Key, PrototypeClass);
                    UE_LOG(LogTemp, Log, TEXT("DEBUG: Prototipo '%s' cargado y registrado correctamente desde '%s'."), *Entry.Key, *Entry.Path);
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("DEBUG: ERROR: La clase cargada '%s' para el prototipo '%s' NO implementa la interfaz IIEnemigoPrototype. �Verifica el Blueprint!"), *PrototypeClass->GetName(), *Entry.Key);
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("DEBUG: ERROR: No se pudo cargar el prototipo '%s' desde la ruta: '%s'. �Verifica la ruta y si el Blueprint est� cocinado!"), *Entry.Key, *Entry.Path);
            }
        }
        for (int i = 0; i <= FMath::RandRange(1, 40); i++) {
            SpawnExampleNaves();
        }
            
    }
    else
    {
            TEXT("MyPrototypeRegistry is null in the GameMode");
    }
    //end

    SpawnCieloNoche();
    //AFabricaBloques* FabricaBloques = GetWorld()->SpawnActor<AFabricaBloques>(AFabricaBloques::StaticClass());



    
    //prueba de factorymethod


    UWorld* const World = GetWorld();
    if (World)
    {
        // nave
        //pepe = World->SpawnActor<AAE_NaveEnemiga>(AAE_NaveEnemiga::StaticClass(), FVector(0.0f, 0.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
    
        //pepe->SetActorLocation(pepe->GetActorLocation() + FVector(0.0f, 0.0f, 300.0f)); // Ajusta la altura seg n sea necesario
        //sosp

        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

        AceroFactoryInstance = World->SpawnActor<ABloqueFactory>(ABloqueAceroFactory::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
        if (AceroFactoryInstance)
        {
            UE_LOG(LogTemp, Warning, TEXT("GameMode:  BloqueAceroFactory instanciado con  xito!"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("GameMode:  Fallo al instanciar BloqueAceroFactory!"));
        }

        // instancia de ABloqueLadrilloFactory
        LadrilloFactoryInstance = World->SpawnActor<ABloqueFactory>(ABloqueLadrilloFactory::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
        if (LadrilloFactoryInstance)
        {
            UE_LOG(LogTemp, Warning, TEXT("GameMode:  BloqueLadrilloFactory instanciado con  xito!"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("GameMode:  Fallo al instanciar BloqueLadrilloFactory!"));
        }

        if (AceroFactoryInstance)
        {
            ABloque* MiBloqueDeAcero = AceroFactoryInstance->CrearBloque();
            if (MiBloqueDeAcero)
            {
                MiBloqueDeAcero->SetActorLocation(FVector(0.f, 0.f, 150.f));
                UE_LOG(LogTemp, Warning, TEXT("GameMode:  Bloque de Acero creado usando Factory Method y visible!"));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("GameMode: El Factory de Acero no pudo crear el Bloque."));
            }
        }

        if (LadrilloFactoryInstance)
        {
            ABloque* MiBloqueDeLadrillo = LadrilloFactoryInstance->CrearBloque();
            if (MiBloqueDeLadrillo)
            {
                MiBloqueDeLadrillo->SetActorLocation(FVector(200.f, 0.f, 150.f));
                UE_LOG(LogTemp, Warning, TEXT("GameMode:  Bloque de Ladrillo creado usando Factory Method y visible!"));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("GameMode: El Factory de Ladrillo no pudo crear el Bloque."));
            }
        }

        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
            TEXT("GameMode:  Bloques creados usando Factory Method!"));
    }


    //end prueba


    //prueba de builder

    UWorld* Mundo = GetWorld();
    if (!Mundo)
    {
        UE_LOG(LogTemp, Error, TEXT("ABomberMan_012025GameMode::BeginPlay - No se pudo obtener el Mundo."));
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("ERROR: GameMode - No se pudo obtener el Mundo."));
        return;
    }

    FActorSpawnParameters ParametrosSpawn;
    ParametrosSpawn.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    ParametrosSpawn.bNoFail = true;

    // 1. Instanciar el Concrete Builder (El Constructor)
    ConstructorDelJuego = Mundo->SpawnActor<AConstructorLaberintoConcreto>(AConstructorLaberintoConcreto::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn);
    if (!ConstructorDelJuego)
    {
        UE_LOG(LogTemp, Error, TEXT("GameMode: fail el spawn de AConstructorLaberintoConcreto."));
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("ERROR: GameMode - Fallo el spawn del Constructor."));
        return;
    }
    FString MensajeConstructor = TEXT("GameMode: ConstructorLaberintoConcreto instanciado.");
    UE_LOG(LogTemp, Log, TEXT("%s"), *MensajeConstructor);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, MensajeConstructor);

    // 2. Instanciar el Director
    DirectorDelJuego = Mundo->SpawnActor<ADirectorLaberinto>(ADirectorLaberinto::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn);
    if (!DirectorDelJuego)
    {
        UE_LOG(LogTemp, Error, TEXT("GameMode: Fallo el spawn de ADirectorLaberinto."));
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("ERROR: GameMode - fallo el spawn del Director."));
        /*	if (ConstructorDelJuego && !ConstructorDelJuego->IsPendingKill())
        {
            ConstructorDelJuego->Destroy();
        }*/
        return;
    }
    FString MensajeDirector = TEXT("GameMode: DirectorLaberinto instanciado.");
    UE_LOG(LogTemp, Log, TEXT("%s"), *MensajeDirector);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, MensajeDirector);

    // 3. Asignar el Builder al Director
    DirectorDelJuego->ConstructorActualBuilder = ConstructorDelJuego;
    FString MensajeAsignacion = TEXT("GameMode: Constructor asignado al Director.");
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, MensajeAsignacion);

    // 4. El cliente (GameMode) pide al Director que construya el laberinto
    LaberintoActual = DirectorDelJuego->ConstruirLaberintoPorCapas(
        DirectorDelJuego->DatosPlantillaPiso,
        DirectorDelJuego->DatosPlantillaBordeInferior,
        DirectorDelJuego->DatosPlantillaBordeSuperior,
        DirectorDelJuego->DatosPlantillaMurosInferiores,
        DirectorDelJuego->DatosPlantillaMurosSuperiores
    );

    if (LaberintoActual)
    {
        FString MensajeLaberintoFinal = FString::Printf(TEXT("GameMode: Laberinto Finalizado y Referencia Obtenida. Total de bloques: %d"), LaberintoActual->ObtenerBloques().Num());
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, MensajeLaberintoFinal);
    }

    //end prueba




    /*
    FVector posicionBloque = FVector(
        XInicial + 0 * AnchoBloque,
        YInicial + 0 * LargoBloque,
        20.0f); // Z queda en 0 (altura del bloque)


    ABloque* BloqueNuevo = FabricaBloques->CrearBloque("Acero", posicionBloque);
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
        TEXT("Bloque creado"));
        */
    //GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

    
    // Recorremos la matriz para generar los bloques
    /*
    for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
    {
        for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
        {
            int32 valor = aMapaBloques[fila][columna];
            if (valor != 0) // Si no es espacio vac o
            {
                // Calculamos la posici n del bloque
                FVector posicionBloque = FVector(
                    XInicial + columna * AnchoBloque,
                    YInicial + fila * LargoBloque,
                    20.0f); // Z queda en 0 (altura del bloque)

                // Llamamos a la funci n para generar un bloque
                //SpawnBloque(posicionBloque, valor);
                switch (valor)
                {
                case 1: // Madera
                    FabricaBloques->CrearBloque("Madera", posicionBloque);
                    //SpawnBloque(posicionBloque, 1);
                    break;
                case 2: // Ladrillo
                    FabricaBloques->CrearBloque("Ladrillo", posicionBloque);
                    break;
                case 3: // Concreto
                    FabricaBloques->CrearBloque("Concreto", posicionBloque);
                    break;
                case 4: // Acero
                    FabricaBloques->CrearBloque("Acero", posicionBloque);
                    break;
                case 5: // Burbuja
                    FabricaBloques->CrearBloque("Burbuja", posicionBloque);
                    break;
                default:
                    break;
                }
            }
        }
    }
    */
    //GetWorld()->GetTimerManager().SetTimer(tHDestruirBloques, this, &ABomberMan_012025GameMode::DestruirBloque, 2.0f, true);
}
void ABomberMan_012025GameMode::SpawnCieloNoche()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		// CieloNoche
		CieloNoche = World->SpawnActor<ACieloNoche>(ACieloNoche::StaticClass(), FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
		if (CieloNoche)
		{
			CieloNoche->SetActorLocation(FVector(0.0f, 0.0f, 10000.0f)); // Ajusta la altura seg n sea necesario
			UE_LOG(LogTemp, Warning, TEXT("CieloNoche instanciado con  xito."));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Fallo al instanciar CieloNoche."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo obtener el mundo para instanciar CieloNoche."));
	}
}
void ABomberMan_012025GameMode::SpawnExampleNaves()
{
	UE_LOG(LogTemp, Log, TEXT("SpawnExampleNaves() se est� ejecutando."));

	if (MyPrototypeRegistry)
	{
		AActor* SpawnedNaveLenta = MyPrototypeRegistry->GetClonedPrototypeById(TEXT("Lenta"), GetWorld(), FVector(0.0f, 0.0f, 400.0f), FRotator::ZeroRotator);
		if (SpawnedNaveLenta)
		{
			AAE_NaveEnemiga* NaveLenta = Cast<AAE_NaveEnemiga>(SpawnedNaveLenta);
			if (NaveLenta)
			{
				UE_LOG(LogTemp, Log, TEXT("Nave Lenta clonada. Velocidad: %f"), NaveLenta->VelocidadMovimiento);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Nave Lenta spawneda pero no es AAE_NaveEnemiga."));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No se pudo spawnear la Nave Lenta. (Fall� GetClonedPrototypeById)"));
		}

		AActor* SpawnedNaveRapida = MyPrototypeRegistry->GetClonedPrototypeById(TEXT("Rapida"), GetWorld(), FVector(0.0f, 00.0f, 400.0f), FRotator::ZeroRotator); // Coordenada Y ajustada para que no se superpongan
		if (SpawnedNaveRapida)
		{
			AAE_NaveEnemiga* NaveRapida = Cast<AAE_NaveEnemiga>(SpawnedNaveRapida);
			if (NaveRapida)
			{
				UE_LOG(LogTemp, Log, TEXT("Nave R�pida clonada. Velocidad: %f"), NaveRapida->VelocidadMovimiento);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Nave R�pida spawneda pero no es AAE_NaveEnemiga."));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No se pudo spawnear la Nave R�pida. (Fall� GetClonedPrototypeById)"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("MyPrototypeRegistry es nulo en SpawnExampleNaves(). Esto es un error grave."));
	}
}


void ABomberMan_012025GameMode::PlayerDied()
{
    if (GameFlowFacade)
    {
        GameFlowFacade->HandlePlayerDeath();
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Player has died! Game Over!"));
    }
}

void ABomberMan_012025GameMode::ReportEnemyKilled()
{
    if (GameFlowFacade)
    {
        GameFlowFacade->OnEnemyKilled();
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Enemy has been killed!"));
    }
}
/*
// Funci n para generar un bloque
void ABomberMan_012025GameMode::SpawnBloque(FVector posicionBloque, int32 tipoBloque)
{
	//ABloque* BloqueGenerado = nullptr;

	ABloque* BloqueGenerado = nullptr;
	// Elegir tipo de bloque basado en el valor
	if (tipoBloque == 5)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueBurbuja>(ABloqueBurbuja::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Burbuja", posicionBloque);
	}
	else if (tipoBloque == 4)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Acero", posicionBloque);
	}
	else if (tipoBloque == 3)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Concreto", posicionBloque);
	}
	else if (tipoBloque == 2)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Ladrillo", posicionBloque);
	}
	else if (tipoBloque == 1)
	{
		//BloqueGenerado = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado = FabricaDeBloques->CrearBloque("Madera", posicionBloque);
	}
	else {
		return;
	}
	// Agregar el bloque al TArray si fue generado
	if (BloqueGenerado)
	{
		aBloques.Add(BloqueGenerado);
	}

}

void ABomberMan_012025GameMode::DestruirBloque()
{
	//Seleccionar aleatoriamente un bloque del array ABloques para su eliminacion
	int numeroBloques = aBloques.Num();
	int NumeroAleatorio = FMath::RandRange(1, numeroBloques);

	if (aBloques.Num() > 0)
	{
		BloqueActual = aBloques[NumeroAleatorio]; // Obt n el primer bloque
		if (BloqueActual)
		{
			BloqueActual->Destroy();
			// Realiza operaciones con el bloque
			//primerBloque->SetActorLocation(FVector(100.0f, 100.0f, 100.0f));
		}
	}
}

/*
void AMyActor::TestMap()
{
	// Crear el TMap
	TMap<FString, int32> ExampleMap;

	// Agregar elementos
	ExampleMap.Add("Jugador1", 100);
	ExampleMap.Add("Jugador2", 200);
	ExampleMap.Add("Jugador3", 300);

	// Acceder a un valor
	if (int32* Score = ExampleMap.Find("Jugador2"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Puntuaci n de Jugador2: %d"), *Score);
	}

	// Eliminar un elemento
	ExampleMap.Remove("Jugador1");

	// Iterar sobre el TMap
	for (const TPair<FString, int32>& Pair : ExampleMap)
	{
		UE_LOG(LogTemp, Warning, TEXT("Clave: %s, Valor: %d"), *Pair.Key, Pair.Value);
	}
}
*/


// Create a new Enemigo
//ABloque* bloque01 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(934.0f, 1370.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
//ABloque* bloque02 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(734.0f, 1370.0f, 50.0f), FRotator(0.0f, 0.0f, 0.0f));

//int numeroBloqueConMovimiento = 0;

/*
for (int i = 0; i < 20; i++)
{

	ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(500.0f + i * 100 , 2500.0f - i * 100, 20.0f), FRotator(0.0f, 0.0f, 0.0f));
		
	
	if (bloque->bPuedeMoverse)
	{
		numeroBloqueConMovimiento++;
	}

	if (numeroBloqueConMovimiento >= 6)
	{
		bloque->bPuedeMoverse = false;
	}

}
*/
//SpawnBloques();


/*
void ABomberMan_012025GameMode::SpawnBloques()
{
	// recorrer el array de bloques y hacer spawn de cada uno
	for (int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if (aMapaBloques[i][j] == 1)
			{
				FVector PosicionBloque = FVector()
				ABloqueLadrillo* BloqueLadrillo = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(posicionSiguienteBloque.X + j * AnchoBloque, posicionSiguienteBloque.Y - i * LargoBloque, posicionSiguienteBloque.Z), FRotator(0.0f, 0.0f, 0.0f));
		*/		/*if (BloqueLadrillo)
				{
					aBloques.Add(static_cast<ABloque*>(BloqueLadrillo));
				}*/
	/*		}
		}
		//ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(500.0f + i * 100, 2500.0f - i * 100, 20.0f), FRotator(0.0f, 0.0f, 0.0f));
	}
}
*/