// Fill out your copyright notice in the Description page of Project Settings.

#include "BuilderLaberintoClasico.h"

// Sets default values
ABuilderLaberintoClasico::ABuilderLaberintoClasico()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ABuilderLaberintoClasico::CrearBordes(FString tipoBloque)
{
}

void ABuilderLaberintoClasico::CrearMuros(FString tipoBloque)
{
}

void ABuilderLaberintoClasico::CrearPasillos(FString tipoBloque)
{
}

void ABuilderLaberintoClasico::CrearPuertas(FString tipoPuerta)
{
}

void ABuilderLaberintoClasico::CrearObstaculos(FString tipoObstaculo)
{
}

void ABuilderLaberintoClasico::CrearEscondites(FString tipoEscondite)
{
}

// Called when the game starts or when spawned
void ABuilderLaberintoClasico::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABuilderLaberintoClasico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
