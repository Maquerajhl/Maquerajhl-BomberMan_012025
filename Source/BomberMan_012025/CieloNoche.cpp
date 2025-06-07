// CieloNoche.cpp
#include "CieloNoche.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Materials/Material.h"

ACieloNoche::ACieloNoche()
{
	PrimaryActorTick.bCanEverTick = true;

	SkyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkyMesh"));
	RootComponent = SkyMesh;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
	if (MeshAsset.Succeeded())
	{
		SkyMesh->SetStaticMesh(MeshAsset.Object);
		SkyMesh->SetWorldScale3D(FVector(1000.0f)); 
		SkyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		SkyMesh->SetCastShadow(false);
	}


	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/free-colorful-sci-fi-skybox/colorful_scifi_Mat.colorful_scifi_Mat"));
	if (MaterialAsset.Succeeded())
	{
		SkyMesh->SetMaterial(0, MaterialAsset.Object);
	}
}

void ACieloNoche::BeginPlay()
{
	Super::BeginPlay();
}

void ACieloNoche::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
