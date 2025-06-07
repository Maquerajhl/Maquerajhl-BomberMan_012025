// BomberMan_012025/Source/BomberMan_012025/DirectorLaberinto.cpp
#include "DirectorLaberinto.h" // ¡Cambio de include!
#include "ConstructorLaberintoConcreto.h" // ¡Cambio de include!
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "GameFramework/Actor.h" // ¡Importante para IsPendingKill() de AActor si no está ya indirectamente!
#include "UObject/NoExportTypes.h" // Para FColor y FLinearColor

ADirectorLaberinto::ADirectorLaberinto()
{
    PrimaryActorTick.bCanEverTick = false;
    InicializarPlantillas();
}

void ADirectorLaberinto::BeginPlay()
{
    Super::BeginPlay();

    if (!ConstructorActualBuilder)
    {
        FActorSpawnParameters ParametrosSpawn;
        ParametrosSpawn.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        ConstructorActualBuilder = GetWorld()->SpawnActor<AConstructorLaberintoConcreto>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn);
        if (!ConstructorActualBuilder)
        {
            UE_LOG(LogTemp, Error, TEXT("ADirectorLaberinto::BeginPlay - Falló el spawn de AConstructorLaberintoConcreto."));
            if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("ERROR: DirectorLaberinto - Falló el spawn del Constructor."));
        }
    }
}

UMaestroLaberintoProducto* ADirectorLaberinto::ConstruirLaberintoPorCapas(
    const TArray<FilaPlantilla>& PlantillaPiso,
    const TArray<FilaPlantilla>& PlantillaBordeInferior,
    const TArray<FilaPlantilla>& PlantillaBordeSuperior,
    const TArray<FilaPlantilla>& PlantillaMurosInferiores,
    const TArray<FilaPlantilla>& PlantillaMurosSuperiores,
    float TamanoCelda)
{
    if (!ConstructorActualBuilder)
    {
        UE_LOG(LogTemp, Error, TEXT("ADirectorLaberinto::ConstruirLaberintoPorCapas - ConstructorActualBuilder es nulo. No se puede construir el laberinto."));
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("ERROR: DirectorLaberinto - Builder nulo para construir laberinto."));
        return nullptr;
    }

    FString MensajeInicio = TEXT("--- Director: Iniciando construcción de Laberinto Capa por Capa ---");
    UE_LOG(LogTemp, Log, TEXT("%s"), *MensajeInicio);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::White, MensajeInicio);

    // Paso 1: Eliminar todos los objetos existentes en el mapa (excluyendo Director y Builder)
    LimpiarActoresDelMundo(ADirectorLaberinto::StaticClass());
    LimpiarActoresDelMundo(AConstructorLaberintoConcreto::StaticClass());

    ConstructorActualBuilder->Reiniciar();

    auto ConvertirPlantilla = [](const TArray<FilaPlantilla>& InPlantilla) -> TArray<TArray<int32>>
        {
            TArray<TArray<int32>> OutPlantilla;
            for (const FilaPlantilla& Fila : InPlantilla)
            {
                OutPlantilla.Add(Fila.FilaDatos);
            }
            return OutPlantilla;
        };

    FString MensajePiso = TEXT("Director: Construyendo el PISO del laberinto (Nivel Z = 0)");
    UE_LOG(LogTemp, Log, TEXT("%s"), *MensajePiso);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Silver, MensajePiso);
    ConstructorActualBuilder->ConstruirCapa(ConvertirPlantilla(PlantillaPiso), 0, TamanoCelda);

    FString MensajeBordesInferiores = TEXT("Director: Construyendo CONTORNOS INFERIORES y MUROS INFERIORES (Nivel Z = 1)");
    UE_LOG(LogTemp, Log, TEXT("%s"), *MensajeBordesInferiores);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Silver, MensajeBordesInferiores);
    ConstructorActualBuilder->ConstruirCapa(ConvertirPlantilla(PlantillaBordeInferior), 1, TamanoCelda);
    ConstructorActualBuilder->ConstruirCapa(ConvertirPlantilla(PlantillaMurosInferiores), 1, TamanoCelda);

    FString MensajeBordesSuperiores = TEXT("Director: Construyendo CONTORNOS SUPERIORES y MUROS SUPERIORES (Nivel Z = 2)");
    UE_LOG(LogTemp, Log, TEXT("%s"), *MensajeBordesSuperiores);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Silver, MensajeBordesSuperiores);
    ConstructorActualBuilder->ConstruirCapa(ConvertirPlantilla(PlantillaBordeSuperior), 2, TamanoCelda);
    ConstructorActualBuilder->ConstruirCapa(ConvertirPlantilla(PlantillaMurosSuperiores), 2, TamanoCelda);

    UMaestroLaberintoProducto* LaberintoCompletado = ConstructorActualBuilder->ObtenerResultado();
    FString MensajeFin = TEXT("--- Director: Laberinto Capa por Capa Construido ---");
    UE_LOG(LogTemp, Log, TEXT("%s"), *MensajeFin);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::White, MensajeFin);

    if (LaberintoCompletado)
    {
        FString MensajeSpawn = TEXT("Director: Spawneando bloques del laberinto en el mundo de juego.");
        UE_LOG(LogTemp, Log, TEXT("%s"), *MensajeSpawn);
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Turquoise, MensajeSpawn);

        UWorld* Mundo = GetWorld();
        if (Mundo)
        {
            for (ABloque* Bloque : LaberintoCompletado->ObtenerBloques())
            {
                if (Bloque)
                {
                    FString MensajeBloque = FString::Printf(TEXT("Director: Bloque <%s> posicionado en (%.1f,%.1f,%.1f)"),
                        *Bloque->GetClass()->GetName(), Bloque->GetActorLocation().X, Bloque->GetActorLocation().Y, Bloque->GetActorLocation().Z);
                    UE_LOG(LogTemp, Log, TEXT("%s"), *MensajeBloque);
                    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, MensajeBloque); // Cambiado a Cyan
                }
            }
        }
    }

    return LaberintoCompletado;
}

void ADirectorLaberinto::LimpiarActoresDelMundo(TSubclassOf<AActor> ClaseActorAExcluir)
{
    UWorld* Mundo = GetWorld();
    if (!Mundo)
    {
        UE_LOG(LogTemp, Error, TEXT("ADirectorLaberinto::LimpiarActoresDelMundo - No se pudo obtener el Mundo."));
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("ERROR: Director - No se pudo obtener el Mundo para limpiar."));
        return;
    }

    TArray<AActor*> ActoresEncontrados;
    UGameplayStatics::GetAllActorsOfClass(Mundo, AActor::StaticClass(), ActoresEncontrados);

    int32 ActoresDestruidos = 0;
    for (AActor* Actor : ActoresEncontrados)
    {
        bool bEsActorEsencial = (Actor == this || Actor == ConstructorActualBuilder);

        if (ClaseActorAExcluir && Actor->IsA(ClaseActorAExcluir))
        {
            bEsActorEsencial = true;
        }

        // ¡Este es el ajuste clave! Para usar IsPendingKill() en un AActor*, necesitas que la definición de AActor sea completa.
        // GameFramework/Actor.h ya debería haberlo proporcionado.
        // Si sigue dando error, asegúrate de que tus propias clases (ABloque, ABloqueFactory, etc.)
        // hereden DIRECTAMENTE o INDIRECTAMENTE de AActor para que IsPendingKill() sea válido para ellas.
        // Si no son AActor, no tendrán IsPendingKill().
        /*if (Actor && !Actor->IsPendingKill() && !bEsActorEsencial)
        {
            Actor->Destroy();
            ActoresDestruidos++;
        }*/
    }
    FString Mensaje = FString::Printf(TEXT("Director: ¡%d actores han sido 'eliminados' del mapa! (Excluyendo clase: %s)"), ActoresDestruidos, ClaseActorAExcluir ? *ClaseActorAExcluir->GetName() : TEXT("Ninguna"));
    UE_LOG(LogTemp, Log, TEXT("%s"), *Mensaje);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, Mensaje);
}


void ADirectorLaberinto::InicializarPlantillas()
{
    // ... (El código de InicializarPlantillas que ya corregimos con FilaPlantilla, se mantiene igual) ...
    DatosPlantillaPiso.Empty();
    DatosPlantillaBordeInferior.Empty();
    DatosPlantillaBordeSuperior.Empty();
    DatosPlantillaMurosInferiores.Empty();
    DatosPlantillaMurosSuperiores.Empty();

    // Plantilla de Piso
    TArray<TArray<int32>> TempPiso = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1}
    };
    for (const auto& Fila : TempPiso)
    {
        FilaPlantilla NuevaFila;
        NuevaFila.FilaDatos = Fila;
        DatosPlantillaPiso.Add(NuevaFila);
    }

    // Plantilla de Borde Inferior
    TArray<TArray<int32>> TempBordeInferior = {
        {4, 2, 3, 1, 1, 2, 3, 4},
        {1, 0, 0, 0, 0, 0, 0, 3},
        {1, 0, 0, 0, 0, 0, 0, 3},
        {2, 0, 0, 0, 0, 0, 0, 4},
        {5, 0, 0, 0, 0, 0, 0, 2},
        {3, 0, 0, 0, 0, 0, 0, 1},
        {4, 0, 0, 0, 0, 0, 0, 3},
        {3, 0, 0, 0, 0, 0, 0, 2}
    };
    for (const auto& Fila : TempBordeInferior)
    {
        FilaPlantilla NuevaFila;
        NuevaFila.FilaDatos = Fila;
        DatosPlantillaBordeInferior.Add(NuevaFila);
    }

    // Plantilla de Borde Superior
    TArray<TArray<int32>> TempBordeSuperior = {
        {3, 5, 2, 4, 1, 3, 5, 1},
        {1, 0, 0, 0, 0, 0, 0, 4},
        {5, 0, 0, 0, 0, 0, 0, 2},
        {2, 0, 0, 0, 0, 0, 0, 3},
        {4, 0, 0, 0, 0, 0, 0, 1},
        {2, 0, 0, 0, 0, 0, 0, 5},
        {1, 0, 0, 0, 0, 0, 0, 3},
        {3, 0, 0, 0, 0, 0, 0, 4}
    };
    for (const auto& Fila : TempBordeSuperior)
    {
        FilaPlantilla NuevaFila;
        NuevaFila.FilaDatos = Fila;
        DatosPlantillaBordeSuperior.Add(NuevaFila);
    }

    // Plantilla de Muros Inferiores
    TArray<TArray<int32>> TempMurosInferiores = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 0, 0, 0, 0},
        {0, 2, 0, 5, 0, 3, 0, 0},
        {0, 3, 0, 0, 0, 4, 0, 0},
        {0, 4, 3, 0, 5, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 2, 0},
        {0, 0, 3, 6, 2, 0, 1, 0},
        {0, 0, 0, 0, 5, 0, 3, 0}
    };
    for (const auto& Fila : TempMurosInferiores)
    {
        FilaPlantilla NuevaFila;
        NuevaFila.FilaDatos = Fila;
        DatosPlantillaMurosInferiores.Add(NuevaFila);
    }

    // Plantilla de Muros Superiores
    TArray<TArray<int32>> TempMurosSuperiores = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 6, 0, 0, 0, 0},
        {0, 4, 0, 1, 0, 2, 0, 0},
        {0, 3, 0, 0, 0, 5, 0, 0},
        {0, 2, 1, 0, 4, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0},
        {0, 0, 2, 0, 6, 0, 5, 0},
        {0, 0, 0, 0, 6, 0, 2, 0}
    };
    for (const auto& Fila : TempMurosSuperiores)
    {
        FilaPlantilla NuevaFila;
        NuevaFila.FilaDatos = Fila;
        DatosPlantillaMurosSuperiores.Add(NuevaFila);
    }
}