#include "ConstructorLaberintoConcreto.h"
#include "BloqueAceroFactory.h"
#include "BloqueBurbujaFactory.h"
#include "BloqueConcretoFactory.h"
#include "BloqueLadrilloFactory.h"
#include "BloqueMaderaFactory.h"
#include "BloqueFactory.h"
#include "Bloque.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

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
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("ERROR: ConstructorLaberintoConcreto - No se pudo obtener el Mundo."));
        return;
    }

    FActorSpawnParameters ParametrosSpawn;
    ParametrosSpawn.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    ParametrosSpawn.bNoFail = true;

    FactoriasBloques.Add(ECodigoBloque::GENERICO, Mundo->SpawnActor<ABloqueFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::ACERO, Mundo->SpawnActor<ABloqueAceroFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::BURBUJA, Mundo->SpawnActor<ABloqueBurbujaFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::CONCRETO, Mundo->SpawnActor<ABloqueConcretoFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::LADRILLO, Mundo->SpawnActor<ABloqueLadrilloFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));
    FactoriasBloques.Add(ECodigoBloque::MADERA, Mundo->SpawnActor<ABloqueMaderaFactory>(FVector::ZeroVector, FRotator::ZeroRotator, ParametrosSpawn));

    for (const auto& Elemento : FactoriasBloques)
    {
        if (!Elemento.Value)
        {
            FString MensajeError = FString::Printf(TEXT("AConstructorLaberintoConcreto::BeginPlay - Fallo el spawn de la factoria para el Codigo de Bloque: %d"), (int32)Elemento.Key);
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
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Mensaje);
}

void AConstructorLaberintoConcreto::ConstruirCapa(const TArray<TArray<int32>>& Plantilla, int32 NivelAltura, float TamanoCelda)
{
    UWorld* Mundo = GetWorld();
    if (!LaberintoActualProducto || !Mundo)
    {
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
                        FString MensajeAdvertencia = FString::Printf(TEXT("AConstructorLaberintoConcreto::ConstruirCapa - Fallo la creacion del bloque para el codigo %d en (%d, %d, %.1f)"), (int32)CodigoBloque, Columna, Fila, PosicionZ);
                        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, MensajeAdvertencia);
                    }
                }
                else
                {
                    FString MensajeAdvertencia = FString::Printf(TEXT("AConstructorLaberintoConcreto::ConstruirCapa - No se encontro factoria para el codigo de bloque %d."), (int32)CodigoBloque);
                    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, MensajeAdvertencia);
                }
            }
        }
    }
    FString Mensaje = FString::Printf(TEXT("ConstructorLaberintoConcreto: Capa en Z=%.1f construida. Bloques añadidos: %d"), PosicionZ, LaberintoActualProducto->BloquesGenerados.Num());
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, Mensaje);
}

UMaestroLaberintoProducto* AConstructorLaberintoConcreto::ObtenerResultado()
{
    return LaberintoActualProducto;
}