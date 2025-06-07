#include "BloqueConcretoFactory.h"
#include "BloqueConcreto.h" 

ABloque* ABloqueConcretoFactory::CrearBloque()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		FActorSpawnParameters SpawnParams;
		// Puedes ajustar la ubicación y rotación aquí, o dejar que el cliente las asigne después.
		ABloqueConcreto* NuevoBloqueConcreto = World->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (NuevoBloqueConcreto)
		{
			UE_LOG(LogTemp, Warning, TEXT("BloqueConcretoFactory: Bloque de Concreto creado."));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloque de Concreto creado."));
			return NuevoBloqueConcreto;
		}
	}
	UE_LOG(LogTemp, Error, TEXT("BloqueConcretoFactory: No se pudo crear el Bloque de Concreto."));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error al crear el Bloque de Concreto."));
	return nullptr;
}