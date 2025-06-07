// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBuildeLaberinto.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIBuildeLaberinto : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class BOMBERMAN_012025_API IIBuildeLaberinto
{
	GENERATED_BODY()

public:
	virtual void CrearBordes(FString tipoBloque) = 0;
	virtual void CrearMuros(FString tipoBloque) = 0;
	virtual void CrearPasillos(FString tipoBloque) = 0;
	virtual void CrearPuertas(FString tipoPuerta) = 0;
	virtual void CrearObstaculos(FString tipoObstaculo) = 0;
	virtual void CrearEscondites(FString tipoEscondite) = 0;
};
