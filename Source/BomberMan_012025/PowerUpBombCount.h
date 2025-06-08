#pragma once

#include "PowerUpInterface.h"
#include "PowerUpBombCount.generated.h"

UCLASS()
class BOMBERMAN_012025_API UPowerUpBombCount : public UObject, public IPowerUpInterface
{
    GENERATED_BODY()

public:
    UPowerUpBombCount();

    virtual void ApplyEffect(ABomberMan_012025Character* Character) override;
    virtual void RemoveEffect(ABomberMan_012025Character* Character) override;
};