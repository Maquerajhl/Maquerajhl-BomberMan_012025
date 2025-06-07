// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeBaseTipo01.generated.h"

class AEnemigoAnimalAcuatico;

UCLASS()
class BOMBERMAN_012025_API AGameModeBaseTipo01 : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGameModeBaseTipo01();
public:
	virtual void BeginPlay() override;

	UPROPERTY()
	AEnemigoAnimalAcuatico* SpawnedActor;
	UFUNCTION()
	void DestroyActorFunction();

protected:
	virtual void Tick(float DeltaTime) override;

};
