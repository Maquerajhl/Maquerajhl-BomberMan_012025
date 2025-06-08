#include "PowerUpItem_BombCount.h"
#include "PowerUpBombCount.h"
#include "BomberMan_012025Character.h"

APowerUpItem_BombCount::APowerUpItem_BombCount()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Script/Engine.StaticMesh'/Game/efectos/Shape_Sphere.Shape_Sphere'"));
    if (SphereMesh.Succeeded())
    {
        MeshComponent->SetStaticMesh(SphereMesh.Object);
    }
}

void APowerUpItem_BombCount::ApplyPowerUpTo(ABomberMan_012025Character* Character)
{
    if (Character && Character->PowerUpCollection)
    {
        auto BombCountPowerUp = NewObject<UPowerUpBombCount>();
        Character->PowerUpCollection->AddPowerUp(BombCountPowerUp, Character);
    }
}
