// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IBuilderLaberinto.h"
#include "GameFramework/Actor.h"
#include "BuilderLaberintoClasico.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABuilderLaberintoClasico : public AActor, public IIBuilderLaberinto
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABuilderLaberintoClasico();

	virtual void CrearBordes(FString tipoBloque) override;
	virtual void CrearMuros(FString tipoBloque) override;
	virtual void CrearPasillos(FString tipoBloque) override;
	virtual void CrearPuertas(FString tipoPuerta) override;
	virtual void CrearObstaculos(FString tipoObstaculo) override;
	virtual void CrearEscondites(FString tipoEscondite) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
