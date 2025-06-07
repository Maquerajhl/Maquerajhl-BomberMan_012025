// BomberMan_012025/Source/BomberMan_012025/ConstructorLaberintoConcreto.cpp // Possible file path
#include "ConstructorLaberintoConcreto.h" // MODIFIED: Removed "Laberinto/" prefix
// Incluye las clases concretas de tus Factories
#include "BloqueAceroFactory.h"
#include "BloqueBurbujaFactory.h"
#include "BloqueConcretoFactory.h"
#include "BloqueLadrilloFactory.h"
#include "BloqueMaderaFactory.h"
#include "BloqueFactory.h"
#include "Bloque.h"
// Otros includes de Unreal
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h" // Necesario para GEngine->AddOnScreenDebugMessage

AConstructorLaberintoConcreto::AConstructorLaberintoConcreto()
{
    PrimaryActorTick.bCanEverTick = false;
    LaberintoActualProducto = CreateDefaultSubobject<UMaestroLaberintoProducto>(TEXT("ProductoLaberintoActual"));
}

void AConstructorLaberintoConcreto::BeginPlay()
{
    Super::BeginPlay();

    UWorld* Mundo = GetWorld();
    if (!Mundo)
    {
        UE_LOG(LogTemp, Error, TEXT("AConstructorLaberintoConcreto::BeginPlay - No se pudo obtener el Mundo."));
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("ERROR: ConstructorLaberintoConcreto - No se pudo obtener el Mundo."));
        return;
    }

    FActorSpawnParameters ParametrosSpawn;
    ParametrosSpawn.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    ParametrosSpawn.bNoFail = true;

    // Instanciar y almacenar los factories en el mapa
    FactoriasBloques.Add(ECodigoBloque::GENERICO, Mundo->SpawnActor<ABloqueFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::ACERO, Mundo->SpawnActor<ABloqueAceroFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::BURBUJA, Mundo->SpawnActor<ABloqueBurbujaFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::CONCRETO, Mundo->SpawnActor<ABloqueConcretoFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::LADRILLO, Mundo->SpawnActor<ABloqueLadrilloFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::MADERA, Mundo->SpawnActor<ABloqueMaderaFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));

    // Verificar que todos los factories se hayan creado correctamente
    for (const auto& Elemento : FactoriasBloques)
    {
        if (!Elemento.Value)
        {
            FString MensajeError = FString::Printf(TEXT("AConstructorLaberintoConcreto::BeginPlay - Falló el spawn de la factoría para el Código de Bloque: %d"), (int32)Elemento.Key);
            UE_LOG(LogTemp, Error, TEXT("%s"), *MensajeError);
            if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, MensajeError);
        }
    }

    Reiniciar();
}

void AConstructorLaberintoConcreto::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    /*for (const auto& Elemento : FactoriasBloques)
    {
        if (Elemento.Value && !Elemento.Value->IsPendingKill())
        {
            Elemento.Value->Destroy();
        }
    }*/
    FactoriasBloques.Empty();
    FString Mensaje = TEXT("AConstructorLaberintoConcreto: Factories de bloques destruidos.");
    UE_LOG(LogTemp, Log, TEXT("%s"), *Mensaje);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Orange, Mensaje);
}

void AConstructorLaberintoConcreto::Reiniciar()
{
    if (LaberintoActualProducto)
    {
        LaberintoActualProducto->DestruirTodosLosBloques();
    }
    if (!LaberintoActualProducto)
    {
        LaberintoActualProducto = NewObject<UMaestroLaberintoProducto>(this, TEXT("ProductoLaberintoActual"));
    }
    FString Mensaje = TEXT("ConstructorLaberintoConcreto: Laberinto actual reiniciado.");
    UE_LOG(LogTemp, Log, TEXT("%s"), *Mensaje);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Mensaje);
}

void AConstructorLaberintoConcreto::ConstruirCapa(const TArray<TArray<int32>>& Plantilla, int32 NivelAltura, float TamanoCelda)
{
    UWorld* Mundo = GetWorld();
    if (!LaberintoActualProducto || !Mundo)
    {
        UE_LOG(LogTemp, Error, TEXT("AConstructorLaberintoConcreto::ConstruirCapa - LaberintoActualProducto o Mundo es nulo."));
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("ERROR: ConstructorLaberintoConcreto - LaberintoProducto o Mundo es nulo para construir capa."));
        return;
    }

    float PosicionZ = NivelAltura * TamanoCelda;
    int32 Filas = Plantilla.Num();
    if (Filas == 0) return;
    int32 Columnas = Plantilla[0].Num();

    for (int32 Fila = 0; Fila < Filas; ++Fila)
    {
        for (int32 Columna = 0; Columna < Columnas; ++Columna)
        {
            ECodigoBloque CodigoBloque = static_cast<ECodigoBloque>(Plantilla[Fila][Columna]);

            if (CodigoBloque != ECodigoBloque::NINGUNO)
            {
                ABloqueFactory** PtrFactoria = FactoriasBloques.Find(CodigoBloque);
                if (PtrFactoria && *PtrFactoria)
                {
                    ABloqueFactory* FactoriaActual = *PtrFactoria;
                    ABloque* NuevoBloque = FactoriaActual->CrearBloque();

                    if (NuevoBloque)
                    {
                        FVector PosicionBloque = FVector(Columna * TamanoCelda, Fila * TamanoCelda, PosicionZ);
                        FRotator RotacionBloque = FRotator::ZeroRotator;

                        NuevoBloque->SetActorLocation(PosicionBloque);
                        NuevoBloque->SetActorRotation(RotacionBloque);
                        NuevoBloque->SetActorScale3D(FVector(1.0f));

                        LaberintoActualProducto->BloquesGenerados.Add(NuevoBloque);
                    }
                    else
                    {
                        FString MensajeAdvertencia = FString::Printf(TEXT("AConstructorLaberintoConcreto::ConstruirCapa - Falló la creación del bloque para el código %d en (%d, %d, %.1f)"), (int32)CodigoBloque, Columna, Fila, PosicionZ);
                        UE_LOG(LogTemp, Warning, TEXT("%s"), *MensajeAdvertencia);
                        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, MensajeAdvertencia);
                    }
                }
                else
                {
                    FString MensajeAdvertencia = FString::Printf(TEXT("AConstructorLaberintoConcreto::ConstruirCapa - No se encontró factoría para el código de bloque %d."), (int32)CodigoBloque);
                    UE_LOG(LogTemp, Warning, TEXT("%s"), *MensajeAdvertencia);
                    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, MensajeAdvertencia);
                }
            }
        }
    }
    FString Mensaje = FString::Printf(TEXT("ConstructorLaberintoConcreto: Capa en Z=%.1f construida. Bloques añadidos: %d"), PosicionZ, LaberintoActualProducto->BloquesGenerados.Num());
    UE_LOG(LogTemp, Log, TEXT("%s"), *Mensaje);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, Mensaje);
}

UMaestroLaberintoProducto* AConstructorLaberintoConcreto::ObtenerResultado()
{
    return LaberintoActualProducto;
}