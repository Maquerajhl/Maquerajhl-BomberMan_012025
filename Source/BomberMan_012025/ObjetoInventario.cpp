// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjetoInventario.h"

// Sets default values
AObjetoInventario::AObjetoInventario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObjetoInventario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjetoInventario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

