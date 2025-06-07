#pragma once

#include "CoreMinimal.h"
#include "BloqueFactory.h"
#include "BloqueMaderaFactory.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueMaderaFactory : public ABloqueFactory
{
	GENERATED_BODY()

public:
	// Implementación obligatoria del Factory Method
	virtual ABloque* CrearBloque() override;
};