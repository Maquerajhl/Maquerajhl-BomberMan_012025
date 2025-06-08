#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IEnemigoPrototype.h"
#include "PrototypeRegistry.generated.h"

UCLASS(BlueprintType, Blueprintable)
class BOMBERMAN_012025_API UPrototypeRegistry : public UObject
{
    GENERATED_BODY()

public:
    UPrototypeRegistry();

    UPROPERTY(EditAnywhere, Category = "Prototypes")
    TMap<FString, TSubclassOf<AActor>> PrototypeClasses;

    UFUNCTION(BlueprintCallable, Category = "PrototypeRegistry", meta = (WorldContext = "World"))
    AActor* GetClonedPrototypeById(const FString& PrototypeId, UWorld* World, const FVector& Location, const FRotator& Rotation) const;
};