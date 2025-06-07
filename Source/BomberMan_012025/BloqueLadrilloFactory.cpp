#include "BloqueLadrilloFactory.h"
#include "BloqueLadrillo.h" 

ABloque* ABloqueLadrilloFactory::CrearBloque()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		FActorSpawnParameters SpawnParams;
		// Puedes ajustar la ubicación y rotación aquí, o dejar que el cliente las asigne después.
		ABloqueLadrillo* NuevoBloqueLadrillo = World->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (NuevoBloqueLadrillo)
		{
			UE_LOG(LogTemp, Warning, TEXT("BloqueLadrilloFactory: Bloque de Ladrillo creado."));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloque de Ladrillo creado."));
			return NuevoBloqueLadrillo;
		}
	}
	UE_LOG(LogTemp, Error, TEXT("BloqueLadrilloFactory: No se pudo crear el Bloque de Ladrillo."));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo crear el Bloque de Ladrillo."));
	return nullptr;
}