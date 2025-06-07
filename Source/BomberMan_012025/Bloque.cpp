// Bloque.cpp (Modificado)
#include "Bloque.h"
#include "Components/StaticMeshComponent.h" 

ABloque::ABloque()
{
	PrimaryActorTick.bCanEverTick = false; 

	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
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