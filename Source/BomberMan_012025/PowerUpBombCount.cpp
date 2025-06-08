#include "PowerUpBombCount.h"
#include "BomberMan_012025Character.h"

UPowerUpBombCount::UPowerUpBombCount()
{
}

void UPowerUpBombCount::ApplyEffect(ABomberMan_012025Character* Character)
{
    if (Character)
    {
        Character->SetMaxBombs(Character->GetMaxBombs() + 1);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Power-Up: Bomb Count increased!"));
    }
}

void UPowerUpBombCount::RemoveEffect(ABomberMan_012025Character* Character)
{
    if (Character)
    {
        Character->SetMaxBombs(Character->GetMaxBombs() - 1);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Power-Up: Bomb Count decreased!"));
    }
}