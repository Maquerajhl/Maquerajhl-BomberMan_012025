#include "PrototypeRegistry.h"
#include "Engine/World.h"
#include "IEnemigoPrototype.h"
#include "GameFramework/Actor.h"

UPrototypeRegistry::UPrototypeRegistry()
{
}

AActor* UPrototypeRegistry::GetClonedPrototypeById(const FString& PrototypeId, UWorld* World, const FVector& Location, const FRotator& Rotation) const
{


    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("UPrototypeRegistry::GetClonedPrototypeById - World is null!"));
        return nullptr;
    }

    if (PrototypeClasses.Contains(PrototypeId))
    {
        
        TSubclassOf<AActor> PrototypeClass = PrototypeClasses[PrototypeId];
        if (PrototypeClass)
        {
            if (PrototypeClass->ImplementsInterface(UIEnemigoPrototype::StaticClass()))
            {
                AActor* TempPrototype = GetMutableDefault<AActor>(PrototypeClass);
                if (TempPrototype)
                {
                    return IIEnemigoPrototype::Execute_ClonarActor(TempPrototype, World, Location, Rotation);
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("La clase prototipo '%s' con ID '%s' NO implementa la interfaz IIEnemigoPrototype."), *PrototypeClass->GetName(), *PrototypeId);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Prototipo con ID '%s' no encontrado o clase inválida."), *PrototypeId);
    return nullptr;
}