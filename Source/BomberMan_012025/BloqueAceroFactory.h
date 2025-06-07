#pragma once

#include "CoreMinimal.h"
#include "BloqueFactory.h"
#include "BloqueAceroFactory.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueAceroFactory : public ABloqueFactory
{
	GENERATED_BODY()

public:
	// Implementaci�n obligatoria del Factory Method
	virtual ABloque* CrearBloque() override;
};