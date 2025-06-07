// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SCSpawnActor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOMBERMAN_012025_API USCSpawnActor : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USCSpawnActor();

	UFUNCTION(BlueprintCallable, Category = Ejemplo)
	void Spawn();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorToSpawn;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
