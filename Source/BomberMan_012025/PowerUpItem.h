#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "BomberMan_012025Character.h"
#include "PowerUpItem.generated.h"

UCLASS(Abstract)
class BOMBERMAN_012025_API APowerUpItem : public AActor
{
    GENERATED_BODY()

public:

    APowerUpItem();

    virtual void ApplyPowerUpTo(ABomberMan_012025Character* Character);


protected:
    virtual void BeginPlay() override;
   // ABomberMan_012025Character* Character;

    


protected:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* MeshComponent;

    UPROPERTY(VisibleAnywhere)
    USphereComponent* CollisionComponent;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
