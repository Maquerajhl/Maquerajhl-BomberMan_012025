#pragma once

#include "CoreMinimal.h"
#include "BloqueFactory.h"
#include "BloqueBurbujaFactory.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueBurbujaFactory : public ABloqueFactory
{
	GENERATED_BODY()

public:
	virtual ABloque* CrearBloque() override;
};