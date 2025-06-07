// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "GameStateBase_BomberMan.generated.h"

/**
 * 
 */

UCLASS()
class BOMBERMAN_012025_API AGameStateBase_BomberMan : public AGameStateBase
{
	GENERATED_BODY()
	
public:
    // Constructor to initialize CurrentScore
    AGameStateBase_BomberMan();
    // Will set the CurrentScore variable
    UFUNCTION()
    void SetScore(int32 NewScore);
    // Getter
    UFUNCTION()
    int32 GetScore();


private:
    UPROPERTY()
    int32 CurrentScore;
};

