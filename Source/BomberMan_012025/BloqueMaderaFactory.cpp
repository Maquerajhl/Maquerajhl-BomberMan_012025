#include "BloqueMaderaFactory.h"
#include "BloqueMadera.h" 

ABloque* ABloqueMaderaFactory::CrearBloque()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		FActorSpawnParameters SpawnParams;
		ABloqueMadera* NuevoBloqueMadera = World->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (NuevoBloqueMadera)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloque de Madera creado."));
			return NuevoBloqueMadera;
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error al crear el Bloque de Madera."));
	return nullptr;
}