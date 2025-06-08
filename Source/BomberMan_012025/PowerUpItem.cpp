#include "PowerUpItem.h"
#include "BomberMan_012025Character.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

APowerUpItem::APowerUpItem()
{
    PrimaryActorTick.bCanEverTick = false;

    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    CollisionComponent->SetupAttachment(RootComponent);
    CollisionComponent->InitSphereRadius(150.0f);
    CollisionComponent->SetCollisionProfileName("OverlapAllDynamic");

    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Script/Engine.StaticMesh'/Game/efectos/Shape_Sphere.Shape_Sphere'"));
    if (SphereMesh.Succeeded())
    {
        MeshComponent->SetStaticMesh(SphereMesh.Object);
    }

    MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    MeshComponent->SetMobility(EComponentMobility::Movable);
}

void APowerUpItem::BeginPlay()
{
    Super::BeginPlay();
    CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &APowerUpItem::OnOverlapBegin);
}

void APowerUpItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    ABomberMan_012025Character* Character = Cast<ABomberMan_012025Character>(OtherActor);
    if (Character)
    {
        ApplyPowerUpTo(Character);
        
        Destroy();
    }

    
}

void APowerUpItem::ApplyPowerUpTo(ABomberMan_012025Character* Character)
{
    // La implementación básica (vacía) se deja a las clases derivadas
}