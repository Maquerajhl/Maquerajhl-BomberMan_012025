// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeBaseTipo01.h"
#include "EnemigoAnimalAcuatico.h"
#include "UObject/ConstructorHelpers.h"

AGameModeBaseTipo01::AGameModeBaseTipo01()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AGameModeBaseTipo01::BeginPlay()
{
	// Call the parent class version of this function
	Super::BeginPlay();
	// Displays a red message on the screen for 10 seconds
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Spawning"));
	// Spawn an instance of the AMyFirstActor class at the
	// default location.
	FTransform SpawnLocation;
	SpawnedActor = GetWorld()->SpawnActor<AEnemigoAnimalAcuatico>(AEnemigoAnimalAcuatico::StaticClass(), SpawnLocation);

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this,
		&AGameModeBaseTipo01::DestroyActorFunction, 10);
}

void AGameModeBaseTipo01::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		// Displays a red message on the screen for 10 seconds
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red,
			TEXT("Actor Destroyed"));
		SpawnedActor->Destroy();
	}

}

void AGameModeBaseTipo01::Tick(float DeltaTime)
{
}
