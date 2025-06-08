#pragma once

#include "CoreMinimal.h"
#include "PowerUpInterface.generated.h"


// Declaración forward de ABomberMan_012025Character
class ABomberMan_012025Character;

// Interfaz para los power-ups
UINTERFACE(MinimalAPI)
class UPowerUpInterface : public UInterface
{
    GENERATED_BODY()
};

class BOMBERMAN_012025_API IPowerUpInterface
{
    GENERATED_BODY()

public:
    virtual void ApplyEffect(ABomberMan_012025Character* Character) = 0;
    virtual void RemoveEffect(ABomberMan_012025Character* Character) = 0;
};
