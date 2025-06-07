// Fill out your copyright notice in the Description page of Project Settings.


#include "GameStateBase_BomberMan.h"

AGameStateBase_BomberMan::AGameStateBase_BomberMan()
{
	// Set default score to 0
	CurrentScore = 0;
}

void AGameStateBase_BomberMan::SetScore(int32 NewScore)
{
	// Set the CurrentScore variable to the new score
	CurrentScore = NewScore;
}

int32 AGameStateBase_BomberMan::GetScore()
{
	// Return the current score
	return CurrentScore;
}
