#pragma once

#include "CoreMinimal.h"
#include "BloqueFactory.h"
#include "BloqueConcretoFactory.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueConcretoFactory : public ABloqueFactory
{
	GENERATED_BODY()

public:
	virtual ABloque* CrearBloque() override;
};