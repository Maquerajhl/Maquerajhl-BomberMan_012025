#include "BloqueMaderaFactory.h"
#include "BloqueMadera.h" 

ABloque* ABloqueMaderaFactory::CrearBloque()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		FActorSpawnParameters SpawnParams;
		// Puedes ajustar la ubicación y rotación aquí, o dejar que el cliente las asigne después.
		ABloqueMadera* NuevoBloqueMadera = World->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (NuevoBloqueMadera)
		{
			UE_LOG(LogTemp, Warning, TEXT("BloqueMaderaFactory: Bloque de Madera creado."));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloque de Madera creado."));
			return NuevoBloqueMadera;
		}
	}
	UE_LOG(LogTemp, Error, TEXT("BloqueMaderaFactory: No se pudo crear el Bloque de Madera."));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error al crear el Bloque de Madera."));
	return nullptr;
}