#include "BloqueAceroFactory.h"
#include "BloqueAcero.h" 

ABloque* ABloqueAceroFactory::CrearBloque()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		FActorSpawnParameters SpawnParams;
		// Puedes ajustar la ubicación y rotación aquí, o dejar que el cliente las asigne después.
		ABloqueAcero* NuevoBloqueAcero = World->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (NuevoBloqueAcero)
		{
			UE_LOG(LogTemp, Warning, TEXT("BloqueAceroFactory: Bloque de Acero creado."));
			return NuevoBloqueAcero;
		}
	}
	UE_LOG(LogTemp, Error, TEXT("BloqueAceroFactory: No se pudo crear el Bloque de Acero."));
	return nullptr;
}