// BomberMan_012025/Source/BomberMan_012025/IConstructorLaberintoBuilder.h // Possible file path
#pragma once

#include "CoreMinimal.h"
#include "MaestroLaberintoProducto.h" // MODIFIED: Removed "Laberinto/" prefix

// Enum para mapear los códigos de plantilla a los tipos de bloques
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

// Esta es una clase base abstracta que actuará como nuestra interfaz de Builder.
// Necesitamos que sea un Actor para que pueda ser "spawnado" en el mundo y tener un GetWorld().
// Por eso, hereda de AActor y no directamente de una interfaz UInterface.
class BOMBERMAN_012025_API IConstructorLaberintoBuilder
{
public:
    virtual ~IConstructorLaberintoBuilder() = default;

    // Reinicia el estado del constructor para una nueva construcción
    virtual void Reiniciar() = 0;

    // Construye una capa (horizonte) de bloques basándose en una plantilla
    // Plantilla: Matriz 2D de códigos ECodigoBloque
    // NivelAltura: El nivel Z (0 para piso, 1 para primer nivel de paredes, etc.)
    // TamanoCelda: El tamaño de una celda/bloque en unidades de Unreal
    virtual void ConstruirCapa(const TArray<TArray<int32>>& Plantilla, int32 NivelAltura, float TamanoCelda) = 0;

    // Devuelve el laberinto terminado (el producto)
    virtual UMaestroLaberintoProducto* ObtenerResultado() = 0;
};