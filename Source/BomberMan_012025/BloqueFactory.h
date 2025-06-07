// BloqueFactory.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueFactory.generated.h"

class ABloque; // Declaración adelantada

UCLASS(Abstract) // La clase base del Factory es abstracta
class BOMBERMAN_012025_API ABloqueFactory : public AActor
{
	GENERATED_BODY()

public:
	ABloqueFactory();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// EL FACTORY METHOD: Un método virtual puro que las subclases deberán implementar
	// para crear el tipo específico de bloque.
	// Retorna un puntero al tipo base ABloque.
	virtual ABloque* CrearBloque() PURE_VIRTUAL(CrearBloque, return nullptr;);

};