#pragma once

#include "CoreMinimal.h"
#include "BloqueFactory.h"
#include "BloqueLadrilloFactory.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueLadrilloFactory : public ABloqueFactory
{
	GENERATED_BODY()

public:
	// obligatorio pata Factory Method
	virtual ABloque* CrearBloque() override;
};