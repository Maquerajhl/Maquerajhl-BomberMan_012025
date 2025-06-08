#pragma once

#include "CoreMinimal.h"
#include "PowerUpInterface.h"// Incluir el encabezado del personaje
#include "PowerUpCollection.generated.h"


// Declaración forward de ABomberMan_012025Character
class ABomberMan_012025Character;

UCLASS()
class BOMBERMAN_012025_API UPowerUpCollection : public UObject
{
    GENERATED_BODY()


private:
    TArray<TObjectPtr<UObject>> PowerUps;

public:
    UPowerUpCollection();

    void AddPowerUp(IPowerUpInterface* PowerUp, ABomberMan_012025Character* Character);
    void RemovePowerUp(IPowerUpInterface* PowerUp, ABomberMan_012025Character* Character);
    void ClearAllPowerUps(ABomberMan_012025Character* Character);
};