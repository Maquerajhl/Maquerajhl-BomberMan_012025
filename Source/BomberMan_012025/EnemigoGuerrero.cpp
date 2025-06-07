// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoGuerrero.h"

AEnemigoGuerrero::AEnemigoGuerrero()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;
	// Initialize properties
	Nombre = TEXT("Enemigo Guerrero");
}

FString AEnemigoGuerrero::ToString()
{
	return FString::Printf(TEXT("Una instancia de AGuerrero : %s"),
		*Nombre);
}

void AEnemigoGuerrero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Implement your custom logic here
	// For example, you can move the enemy or check for collisions
	// Example: AddActorLocalOffset(FVector(0, 0, 1) * DeltaTime);
	// Or check for player proximity and attack
}

void AEnemigoGuerrero::BeginPlay()
{
	Super::BeginPlay();
	// Initialize any properties or perform setup tasks here
	// Example: Set the initial position of the enemy
	// SetActorLocation(FVector(0, 0, 0));
	// Or set a timer for periodic actions
	// GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEnemigoGuerrero::OnTick, 1.0f, true);
}
