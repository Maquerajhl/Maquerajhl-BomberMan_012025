#include "AE_NaveEnemiga.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/UnrealMathUtility.h" // Necesario para FMath::RandRange

// Constructor
AAE_NaveEnemiga::AAE_NaveEnemiga()
{
    PrimaryActorTick.bCanEverTick = true;

    NaveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
    RootComponent = NaveMesh;

    // Cargar el cubo (código igual que antes)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/nave/nave2.nave2'"));
    if (CubeMeshAsset.Succeeded())
    {
        NaveMesh->SetStaticMesh(CubeMeshAsset.Object);
        NaveMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
       // NaveMesh->SetRelativeRotation(FRotator(90.0f,0.0f, 0.0f));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Nave Enemiga: No se pudo cargar el Static Mesh 'Shape_Cube'. Asegúrate de tener el Starter Content habilitado."));
    }

    VelocidadMovimiento = 150.0f;

    // --- Valores por defecto para el patrullaje autónomo ---
    DireccionActualPatrulla = FVector(1.0f, 0.0f, 0.0f); // Empieza moviéndose en X positivo.
    DireccionActualPatrulla.Normalize(); // Asegurarse de que esté normalizada.

    TiempoCambioDireccionMin = 3.0f; // Cada 3 segundos mínimo...
    TiempoCambioDireccionMax = 7.0f; // ...y hasta 7 segundos máximo.

    TiempoHastaSiguienteCambio = 0.0f; // Se calculará en BeginPlay.
    // -------------------------------------------------------------
}

// BeginPlay
void AAE_NaveEnemiga::BeginPlay()
{
    Super::BeginPlay();

    // Establece el primer tiempo de cambio de dirección al inicio
    TiempoHastaSiguienteCambio = FMath::RandRange(TiempoCambioDireccionMin, TiempoCambioDireccionMax);
}

// Tick
void AAE_NaveEnemiga::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);

    // --- Lógica para el cambio de dirección autónomo ---
    TiempoHastaSiguienteCambio -= DeltaTime;
    if (TiempoHastaSiguienteCambio <= 0.0f)
    {
        CambiarDireccionAleatoria();
        // Vuelve a calcular el tiempo para el próximo cambio
        TiempoHastaSiguienteCambio = FMath::RandRange(TiempoCambioDireccionMin, TiempoCambioDireccionMax);
    }
    // ---------------------------------------------------
}

// Función Mover
void AAE_NaveEnemiga::Mover(float DeltaTime)
{
    FVector CurrentLocation = GetActorLocation();

    // Mueve la nave usando la dirección actual de patrulla
    FVector NuevaLocalizacion = CurrentLocation + DireccionActualPatrulla * VelocidadMovimiento * DeltaTime;
    SetActorLocation(NuevaLocalizacion);

    // Haz que la nave rote para mirar hacia su dirección de movimiento
    FRotator LookAtRotation = FRotationMatrix::MakeFromX(DireccionActualPatrulla).Rotator();
    SetActorRotation(FMath::RInterpTo(GetActorRotation(), LookAtRotation, DeltaTime, 5.0f));
}

// Función CambiarDireccionAleatoria
void AAE_NaveEnemiga::CambiarDireccionAleatoria()
{
    // Genera una nueva dirección aleatoria en el plano XY
    DireccionActualPatrulla = FVector(FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f), 0.0f);

    // Si quieres que se mueva en 3D completo:
    // DireccionActualPatrulla = FVector(FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f));

    // Asegúrate de que la dirección sea una unidad (longitud 1)
    DireccionActualPatrulla.Normalize();

    UE_LOG(LogTemp, Log, TEXT("Nave Enemiga: Cambiando dirección a: %s"), *DireccionActualPatrulla.ToString());
}