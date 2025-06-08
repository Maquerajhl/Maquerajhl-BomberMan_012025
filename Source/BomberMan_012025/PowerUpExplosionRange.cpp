#include "PowerUpExplosionRange.h"
#include "BomberMan_012025Character.h"

UPowerUpExplosionRange::UPowerUpExplosionRange()
{
}

void UPowerUpExplosionRange::ApplyEffect(ABomberMan_012025Character* Character)
{
    if (Character)
    {
        Character->SetExplosionRange(Character->GetExplosionRange() + 1);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Power-Up: Explosion Range increased!"));
    }
}

void UPowerUpExplosionRange::RemoveEffect(ABomberMan_012025Character* Character)
{
    if (Character)
    {
        Character->SetExplosionRange(Character->GetExplosionRange() - 1);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Power-Up: Explosion Range decreased!"));
    }
}