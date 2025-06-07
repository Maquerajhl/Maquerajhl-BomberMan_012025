#pragma once

#include "CoreMinimal.h"
#include "BloqueFactory.h"
#include "BloqueAceroFactory.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueAceroFactory : public ABloqueFactory
{
	GENERATED_BODY()

public:
	virtual ABloque* CrearBloque() override;
};