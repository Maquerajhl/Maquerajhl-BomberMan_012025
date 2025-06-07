#include "AE_NaveEnemiga.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/UnrealMathUtility.h" 

AAE_NaveEnemiga::AAE_NaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;

	NaveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	RootComponent = NaveMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/nave/nave2.nave2'"));
	if (CubeMeshAsset.Succeeded())
	{
		NaveMesh->SetStaticMesh(CubeMeshAsset.Object);
		NaveMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	   // NaveMesh->SetRelativeRotation(FRotator(90.0f,0.0f, 0.0f));
	}

	VelocidadMovimiento = 150.0f;

	DireccionActualPatrulla = FVector(1.0f, 0.0f, 0.0f); 
	DireccionActualPatrulla.Normalize(); 

	TiempoCambioDireccionMin = 3.0f; 
	TiempoCambioDireccionMax = 7.0f;

	TiempoHastaSiguienteCambio = 0.0f; 
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

	// DireccionActualPatrulla = FVector(FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f), FMath::RandRange(-1.0f, 1.0f));

	DireccionActualPatrulla.Normalize();

}