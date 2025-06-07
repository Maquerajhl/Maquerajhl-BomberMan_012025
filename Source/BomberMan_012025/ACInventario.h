// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryActor.h"
#include "ACInventario.generated.h"

class AObjetoInventario; // Forward declaration of AObjetoInventario

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOMBERMAN_012025_API UACInventario : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UACInventario();

	UPROPERTY()
	TArray<AInventoryActor*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(AInventoryActor* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(AInventoryActor* ActorToRemove);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
