#pragma once

#include "PowerUpItem.h"
#include "PowerUpItem_ExplosionRange.generated.h"

UCLASS()
class BOMBERMAN_012025_API APowerUpItem_ExplosionRange : public APowerUpItem
{
    GENERATED_BODY()

public:
    APowerUpItem_ExplosionRange();

protected:
    virtual void ApplyPowerUpTo(ABomberMan_012025Character* Character) override;
};