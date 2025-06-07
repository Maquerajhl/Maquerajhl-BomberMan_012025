// BloqueFactory.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueFactory.generated.h"

class ABloque; // Declaraci�n adelantada

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

	// EL FACTORY METHOD: Un m�todo virtual puro que las subclases deber�n implementar
	// para crear el tipo espec�fico de bloque.
	// Retorna un puntero al tipo base ABloque.
	virtual ABloque* CrearBloque() PURE_VIRTUAL(CrearBloque, return nullptr;);

};