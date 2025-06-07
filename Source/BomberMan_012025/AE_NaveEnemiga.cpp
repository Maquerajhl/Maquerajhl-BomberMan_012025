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

    // Cargar el cubo (c�digo igual que antes)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/nave/nave2.nave2'"));
    if (CubeMeshAsset.Succeeded())
    {
        NaveMesh->SetStaticMesh(CubeMeshAsset.Object);
        NaveMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
       // NaveMesh->SetRelativeRotation(FRotator(90.0f,0.0f, 0.0f));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Nave Enemiga: No se pudo cargar el Static Mesh 'Shape_Cube'. Aseg�rate de tener el Starter Content habilitado."));
    }

    VelocidadMovimiento = 150.0f;

    // --- Valores por defecto para el patrullaje aut�nomo ---
    DireccionActualPatrulla = FVector(1.0f, 0.0f, 0.0f); // Empieza movi�ndose en X positivo.
    DireccionActualPatrulla.Normalize(); // Asegurarse de que est� normalizada.

    TiempoCambioDireccionMin = 3.0f; // Cada 3 segundos m�nimo...
    TiempoCambioDireccionMax = 7.0f; // ...y hasta 7 segundos m�ximo.

    TiempoHastaSiguienteCambio = 0.0f; // Se calcular� en BeginPlay.
    // -------------------------------------------------------------
}

// BeginPlay
void AAE_NaveEnemiga::BeginPlay()
{
    Super::BeginPlay();

    // Establece el primer tiempo de cambio de direcci�n al inicio
    TiempoHastaSiguienteCambio = FMath::RandRange(TiempoCambioDireccionMin, TiempoCambioDireccionMax);
}

// Tick
void AAE_NaveEnemiga::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);

    // --- L�gica para el cambio de direcci�n aut�nomo ---
    TiempoHastaSiguienteCambio -= DeltaTime;
    if (TiempoHastaSiguienteCambio <= 0.0f)
    {
        CambiarDireccionAleatoria();
        // Vuelve a calcular el tiempo para el pr�ximo cambio
        TiempoHastaSiguienteCambio = FMath::RandRange(TiempoCambioDireccionMin, TiempoCambioDireccionMax);
    }
    // ---------------------------------------------------
}

// Funci�n Mover
void AAE_NaveEnemiga::Mover(float DeltaTime)
{
    FVector CurrentLocation = GetActorLocation();

    // Mueve la nave usando la direcci�n actual de patrulla
    FVector NuevaLocalizacion = CurrentLocation + DireccionActualPatrulla * VelocidadMovimiento * DeltaTime;
    SetActorLocation(NuevaLocalizacion);

    // Haz que la nave rote para mirar hacia su direcci�n de movimiento
    FRotator LookAtRotation = FRotationMatrix::MakeFromX(DireccionActualPatrulla).Rotator();
    SetActorRotation(FMath::RInterpTo(GetActorRotation(), LookAtRotation, DeltaTime, 5.0f));
}

// Funci�n CambiarDireccionAleatoria
void AAE_NaveEnemiga::CambiarDireccionAleatoria()
{
    // Genera una nueva direcci�n aleatoria en el plano XY
    DireccionActualPatrulla = FVector(FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f), 0.0f);

    // Si quieres que se mueva en 3D completo:
    // DireccionActualPatrulla = FVector(FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f));

    // Aseg�rate de que la direcci�n sea una unidad (longitud 1)
    DireccionActualPatrulla.Normalize();

    UE_LOG(LogTemp, Log, TEXT("Nave Enemiga: Cambiando direcci�n a: %s"), *DireccionActualPatrulla.ToString());
}