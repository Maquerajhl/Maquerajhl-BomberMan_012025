// Fill out your copyright notice in the Description page of Project Settings.


#include "ACInventario.h"

// Sets default values for this component's properties
UACInventario::UACInventario()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


int32 UACInventario::AddToInventory(AInventoryActor* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd);

}

void UACInventario::RemoveFromInventory(AInventoryActor* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove);
}

// Called when the game starts
void UACInventario::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UACInventario::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

