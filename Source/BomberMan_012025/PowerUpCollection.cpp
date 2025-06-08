#include "PowerUpCollection.h"
#include "BomberMan_012025Character.h"


UPowerUpCollection::UPowerUpCollection()
{
}

void UPowerUpCollection::AddPowerUp(IPowerUpInterface* PowerUp, ABomberMan_012025Character* Character)
{
    PowerUps.Add(Cast<UObject>(PowerUp));
    PowerUp->ApplyEffect(Character);
}

void UPowerUpCollection::RemovePowerUp(IPowerUpInterface* PowerUp, ABomberMan_012025Character* Character)
{
    PowerUp->RemoveEffect(Character);
    PowerUps.Remove(Cast<UObject>(PowerUp));
}

void UPowerUpCollection::ClearAllPowerUps(ABomberMan_012025Character* Character)
{
    for (auto PowerUpObj : PowerUps)
    {
        IPowerUpInterface* PowerUp = Cast<IPowerUpInterface>(PowerUpObj);
        if (PowerUp)
        {
            PowerUp->RemoveEffect(Character);
        }
    }
    PowerUps.Empty();
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("sin poderes!"));
}