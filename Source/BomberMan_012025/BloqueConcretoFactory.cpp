#include "BloqueConcretoFactory.h"
#include "BloqueConcreto.h" 

ABloque* ABloqueConcretoFactory::CrearBloque()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		FActorSpawnParameters SpawnParams;
		ABloqueConcreto* NuevoBloqueConcreto = World->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (NuevoBloqueConcreto)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloque de Concreto creado."));
			return NuevoBloqueConcreto;
		}
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error al crear el Bloque de Concreto."));
	return nullptr;
}