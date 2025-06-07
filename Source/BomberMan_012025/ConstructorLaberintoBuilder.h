#pragma once

#include "CoreMinimal.h"
#include "MaestroLaberintoProducto.h"

UENUM(BlueprintType)
enum class ECodigoBloque : uint8
{
    NINGUNO = 0 UMETA(DisplayName = "Sin Bloque"),
    GENERICO = 1 UMETA(DisplayName = "Bloque"),
    ACERO = 2 UMETA(DisplayName = "BloqueAcero"),
    BURBUJA = 3 UMETA(DisplayName = "BloqueBurbuja"),
    CONCRETO = 4 UMETA(DisplayName = "BloqueConcreto"),
    LADRILLO = 5 UMETA(DisplayName = "BloqueLadrillo"),
    MADERA = 6 UMETA(DisplayName = "BloqueMadera")
};

class BOMBERMAN_012025_API IConstructorLaberintoBuilder
{
public:
    virtual ~IConstructorLaberintoBuilder() = default;

    virtual void Reiniciar() = 0;
    virtual void ConstruirCapa(const TArray<TArray<int32>>& Plantilla, int32 NivelAltura, float TamanoCelda) = 0;
    virtual UMaestroLaberintoProducto* ObtenerResultado() = 0;
};