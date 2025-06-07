// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Laberinto.generated.h"

UCLASS()
class BOMBERMAN_012025_API ALaberinto : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	TArray<class ABloque*> aBloques;
	TArray<class APuerta*> aPuertas;
	TArray<class AObstaculo*> aObstaculos;

	TArray<TArray<int32>> aMapaBloques = {
		{4, 4, 4, 4, 4, 4, 4, 4},
		{4, 0, 0, 0, 0, 0, 0, 4},
		{4, 1, 1, 1, 1, 1, 5, 4},
		{4, 0, 0, 0, 0, 0, 0, 4},
		{4, 5, 2, 2, 2, 2, 2, 4},
		{4, 0, 0, 0, 0, 0, 0, 4},
		{4, 3, 3, 3, 3, 3, 5, 4},
		{4, 0, 0, 0, 0, 0, 0, 4},
		{4, 4, 4, 4, 4, 4, 4, 4},
	};

	TArray<TArray<int32>> aMapaObstaculos = {
		{4, 4, 4, 4, 4, 4, 4, 4},
		{4, 0, 0, 0, 0, 0, 0, 4},
		{4, 1, 1, 1, 1, 1, 5, 4},
		{4, 0, 0, 0, 0, 0, 0, 4},
		{4, 5, 2, 2, 2, 2, 2, 4},
		{4, 0, 0, 0, 0, 0, 0, 4},
		{4, 3, 3, 3, 3, 3, 5, 4},
		{4, 0, 0, 0, 0, 0, 0, 4},
		{4, 4, 4, 4, 4, 4, 4, 4},
	};

	TArray<TArray<int32>> aMapaPuertas = {
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 100, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 101, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
	};
};
