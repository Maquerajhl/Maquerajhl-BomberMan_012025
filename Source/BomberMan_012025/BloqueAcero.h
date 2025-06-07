#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAcero.generated.h"

UCLASS()
class BOMBERMAN_012025_API ABloqueAcero : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueAcero();

	// ¡Implementación obligatoria del método virtual puro!
	virtual void InicializarMallaBloque() override;
};