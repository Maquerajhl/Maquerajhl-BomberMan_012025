#include "BloqueBurbujaFactory.h"
#include "BloqueBurbuja.h" 

ABloque* ABloqueBurbujaFactory::CrearBloque()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		FActorSpawnParameters SpawnParams;
		// Puedes ajustar la ubicaci�n y rotaci�n aqu�, o dejar que el cliente las asigne despu�s.
		ABloqueBurbuja* NuevoBloqueBurbuja = World->SpawnActor<ABloqueBurbuja>(ABloqueBurbuja::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (NuevoBloqueBurbuja)
		{
			UE_LOG(LogTemp, Warning, TEXT("BloqueBurbujaFactory: Bloque de Burbuja creado."));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloque de Burbuja creado correctamente."));
			return NuevoBloqueBurbuja;
		}
	}
	UE_LOG(LogTemp, Error, TEXT("BloqueBurbujaFactory: No se pudo crear el Bloque de Burbuja."));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Error al crear el Bloque de Burbuja."));
	return nullptr;
}