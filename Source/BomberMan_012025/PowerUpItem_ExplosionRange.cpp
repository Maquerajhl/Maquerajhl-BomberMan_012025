#include "PowerUpItem_ExplosionRange.h"
#include "PowerUpExplosionRange.h"
#include "BomberMan_012025Character.h"

APowerUpItem_ExplosionRange::APowerUpItem_ExplosionRange()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMesh(TEXT("/Script/Engine.StaticMesh'/Game/efectos/Shape_Sphere.Shape_Sphere'"));
    if (CylinderMesh.Succeeded())
    {
        MeshComponent->SetStaticMesh(CylinderMesh.Object);
    }
}

void APowerUpItem_ExplosionRange::ApplyPowerUpTo(ABomberMan_012025Character* Character)
{
    if (Character && Character->PowerUpCollection)
    {
        auto ExplosionRangePowerUp = NewObject<UPowerUpExplosionRange>();
        Character->PowerUpCollection->AddPowerUp(ExplosionRangePowerUp, Character);
    }
}