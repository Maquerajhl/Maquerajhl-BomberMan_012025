#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEnemigoPrototype.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UIEnemigoPrototype : public UInterface
{
    GENERATED_BODY()
};


class BOMBERMAN_012025_API IIEnemigoPrototype
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Prototype")
    AActor* ClonarActor(UWorld* World, const FVector& Location, const FRotator& Rotation);
};