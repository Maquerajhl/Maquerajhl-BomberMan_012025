#include "BloqueFactory.h"
#include "Bloque.h" 

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