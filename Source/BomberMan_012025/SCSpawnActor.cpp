// Fill out your copyright notice in the Description page of Project Settings.


#include "SCSpawnActor.h"

// Sets default values for this component's properties
USCSpawnActor::USCSpawnActor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void USCSpawnActor::Spawn()
{
	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr)
	{
		FTransform ComponentTransform(this->GetComponentTransform());
		TheWorld->SpawnActor(ActorToSpawn, &ComponentTransform);
	}

}


// Called when the game starts
void USCSpawnActor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USCSpawnActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

