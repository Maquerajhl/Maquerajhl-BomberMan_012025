#pragma once

#include "PowerUpItem.h"
#include "PowerUpItem_BombCount.generated.h"

UCLASS()
class BOMBERMAN_012025_API APowerUpItem_BombCount : public APowerUpItem
{
    GENERATED_BODY()

public:
    APowerUpItem_BombCount();

protected:
    virtual void ApplyPowerUpTo(ABomberMan_012025Character* Character) override;
};