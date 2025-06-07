// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoGuerrero.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025_API AEnemigoGuerrero : public AEnemigo
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemigoGuerrero();

public:
	// Name of the Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	FString Nombre;
	// Returns message containing the Name property
	UFUNCTION(BlueprintCallable, Category = Properties)
	FString ToString();

	void Tick(float DeltaTime) override;


protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
