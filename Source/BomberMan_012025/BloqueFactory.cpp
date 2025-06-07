// BloqueFactory.cpp
#include "BloqueFactory.h"
#include "Bloque.h" // Se incluye para el tipo de retorno

ABloqueFactory::ABloqueFactory()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ABloqueFactory::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}