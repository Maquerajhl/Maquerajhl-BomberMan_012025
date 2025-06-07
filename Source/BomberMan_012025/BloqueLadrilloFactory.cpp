#include "BloqueLadrilloFactory.h"
#include "BloqueLadrillo.h" 

ABloque* ABloqueLadrilloFactory::CrearBloque()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		FActorSpawnParameters SpawnParams;
		ABloqueLadrillo* NuevoBloqueLadrillo = World->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (NuevoBloqueLadrillo)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloque de Ladrillo creado."));
			return NuevoBloqueLadrillo;
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo crear el Bloque de Ladrillo."));
	return nullptr;
}