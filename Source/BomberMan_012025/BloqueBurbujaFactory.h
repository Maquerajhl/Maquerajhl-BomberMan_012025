#pragma once

#include "CoreMinimal.h"
#include "BloqueFactory.h"
#include "BloqueBurbujaFactory.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueBurbujaFactory : public ABloqueFactory
{
	GENERATED_BODY()

public:
	// Implementaci�n obligatoria del Factory Method
	virtual ABloque* CrearBloque() override;
};