#pragma once

#include "PowerUpInterface.h"
#include "PowerUpExplosionRange.generated.h"

UCLASS()
class BOMBERMAN_012025_API UPowerUpExplosionRange : public UObject, public IPowerUpInterface
{
    GENERATED_BODY()

public:
    UPowerUpExplosionRange();

    virtual void ApplyEffect(ABomberMan_012025Character* Character) override;
    virtual void RemoveEffect(ABomberMan_012025Character* Character) override;
};