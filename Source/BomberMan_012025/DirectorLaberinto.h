// BomberMan_012025/Source/BomberMan_012025/DirectorLaberinto.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorLaberintoBuilder.h" // Incluimos nuestra interfaz de Builder
#include "MaestroLaberintoProducto.h"     // Incluimos UMaestroLaberintoProducto
#include "DirectorLaberinto.generated.h"

// Define un struct para representar una fila de la plantilla.
// Esto permite que TArray<FilaPlantilla> sea un UPROPERTY.
USTRUCT(BlueprintType)
struct FilaPlantilla
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plantilla")
    TArray<int32> FilaDatos;
};

// Forward declaration de tu constructor concreto
class AConstructorLaberintoConcreto;

UCLASS()
class BOMBERMAN_012025_API ADirectorLaberinto : public AActor
{
    GENERATED_BODY()

public:
    ADirectorLaberinto();

protected:
    virtual void BeginPlay() override;

public:
    // Propiedad para asignar el Constructor en el editor o en el constructor
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Construccion Laberinto")
    AConstructorLaberintoConcreto* ConstructorActualBuilder; // Referencia a la instancia de tu constructor

    // M�todo principal para construir el laberinto con las plantillas
    UFUNCTION(BlueprintCallable, Category = "Construccion Laberinto")
    UMaestroLaberintoProducto* ConstruirLaberintoPorCapas(
        const TArray<FilaPlantilla>& PlantillaPiso, // �Cambio aqu�!
        const TArray<FilaPlantilla>& PlantillaBordeInferior, // �Cambio aqu�!
        const TArray<FilaPlantilla>& PlantillaBordeSuperior, // �Cambio aqu�!
        const TArray<FilaPlantilla>& PlantillaMurosInferiores, // �Cambio aqu�!
        const TArray<FilaPlantilla>& PlantillaMurosSuperiores, // �Cambio aqu�!
        float TamanoCelda = 100.0f); // Tama�o por defecto de la celda

    // Aqu� puedes definir tus plantillas de ejemplo para demostraci�n (ahora p�blicas para acceso desde GameMode)
    // �Cambio aqu�! Ahora son TArray<FilaPlantilla>
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Construccion Laberinto|Plantillas")
    TArray<FilaPlantilla> DatosPlantillaPiso;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Construccion Laberinto|Plantillas")
    TArray<FilaPlantilla> DatosPlantillaBordeInferior;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Construccion Laberinto|Plantillas")
    TArray<FilaPlantilla> DatosPlantillaBordeSuperior;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Construccion Laberinto|Plantillas")
    TArray<FilaPlantilla> DatosPlantillaMurosInferiores;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Construccion Laberinto|Plantillas")
    TArray<FilaPlantilla> DatosPlantillaMurosSuperiores;

private:
    // Helper para inicializar las plantillas de ejemplo
    void InicializarPlantillas();

    // Funci�n para limpiar actores del mundo
    void LimpiarActoresDelMundo(TSubclassOf<AActor> ClaseActorAExcluir = nullptr);
};