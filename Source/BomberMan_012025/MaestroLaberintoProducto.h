// BomberMan_012025/Source/BomberMan_012025/MaestroLaberintoProducto.h // Possible file path
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Bloque.h" // Incluye la clase base de tus bloques
#include "MaestroLaberintoProducto.generated.h"

/**
 * @brief Representa el laberinto terminado, una colecci�n de ABloque. Es el "Producto" del Patr�n Builder.
 */
UCLASS()
class BOMBERMAN_012025_API UMaestroLaberintoProducto : public UObject
{
    GENERATED_BODY()

public:
    // Constructor
    UMaestroLaberintoProducto();

    // Propiedad para almacenar los bloques spawnados que forman este laberinto
    UPROPERTY()
    TArray<ABloque*> BloquesGenerados; // Lista de punteros a los bloques que forman el laberinto

    // M�todo para obtener los bloques generados
    const TArray<ABloque*>& ObtenerBloques() const { return BloquesGenerados; }

    // Destruye todos los bloques asociados a este laberinto en el mundo
    UFUNCTION(BlueprintCallable, Category = "Laberinto|Producto")
    void DestruirTodosLosBloques();
};