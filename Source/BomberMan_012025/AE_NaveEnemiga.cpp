#include "AE_NaveEnemiga.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/World.h"

AAE_NaveEnemiga::AAE_NaveEnemiga()
    : NaveMesh(CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"))),
    VelocidadMovimiento(150.0f),
    DireccionActualPatrulla(FVector(1.0f, 0.0f, 0.0f)),
    TiempoCambioDireccionMin(3.0f),
    TiempoCambioDireccionMax(7.0f),
    TiempoHastaSiguienteCambio(0.0f)
{
    PrimaryActorTick.bCanEverTick = true;
    RootComponent = NaveMesh;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/nave/nave2.nave2'"));
    if (CubeMeshAsset.Succeeded())
    {
        NaveMesh->SetStaticMesh(CubeMeshAsset.Object);
        NaveMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    }
}

AActor* AAE_NaveEnemiga::ClonarActor_Implementation(UWorld* World, const FVector& Location, const FRotator& Rotation)
{
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("AAE_NaveEnemiga::ClonarActor - World is null!"));
        return nullptr;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    AAE_NaveEnemiga* ClonedActor = World->SpawnActor<AAE_NaveEnemiga>(
        GetClass(),
        Location,
        Rotation,
        SpawnParams
    );

    return ClonedActor;
}

void AAE_NaveEnemiga::BeginPlay()
{
    Super::BeginPlay();
    TiempoHastaSiguienteCambio = FMath::RandRange(TiempoCambioDireccionMin, TiempoCambioDireccionMax);
}

void AAE_NaveEnemiga::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);

    TiempoHastaSiguienteCambio -= DeltaTime;
    if (TiempoHastaSiguienteCambio <= 0.0f)
    {
        CambiarDireccionAleatoria();
        TiempoHastaSiguienteCambio = FMath::RandRange(TiempoCambioDireccionMin, TiempoCambioDireccionMax);
    }
}

void AAE_NaveEnemiga::Mover(float DeltaTime)
{
    FVector CurrentLocation = GetActorLocation();
    FVector NuevaLocalizacion = CurrentLocation + DireccionActualPatrulla * VelocidadMovimiento * DeltaTime;
    SetActorLocation(NuevaLocalizacion);

    FRotator LookAtRotation = FRotationMatrix::MakeFromX(DireccionActualPatrulla).Rotator();
    SetActorRotation(FMath::RInterpTo(GetActorRotation(), LookAtRotation, DeltaTime, 5.0f));
}

void AAE_NaveEnemiga::CambiarDireccionAleatoria()
{
    DireccionActualPatrulla = FVector(FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f), 0.0f);
    DireccionActualPatrulla.Normalize();
}