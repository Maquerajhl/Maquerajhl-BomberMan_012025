#include "Bloque.h"
#include "Components/StaticMeshComponent.h" 

ABloque::ABloque()
{
	PrimaryActorTick.bCanEverTick = false; 


	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBaseAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	MallaBloque->SetStaticMesh(MallaBaseAsset.Object);

	RootComponent = MallaBloque;
}

void ABloque::BeginPlay()
{
	Super::BeginPlay();

	InicializarMallaBloque();
}

void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}