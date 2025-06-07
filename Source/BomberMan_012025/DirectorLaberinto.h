#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorLaberintoBuilder.h"
#include "MaestroLaberintoProducto.h"
#include "DirectorLaberinto.generated.h"

USTRUCT(BlueprintType)
struct FilaPlantilla
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plantilla")
    TArray<int32> FilaDatos;
};

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
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Construccion Laberinto")
    AConstructorLaberintoConcreto* ConstructorActualBuilder;

    UFUNCTION(BlueprintCallable, Category = "Construccion Laberinto")
    UMaestroLaberintoProducto* ConstruirLaberintoPorCapas(
        const TArray<FilaPlantilla>& PlantillaPiso,
        const TArray<FilaPlantilla>& PlantillaBordeInferior,
        const TArray<FilaPlantilla>& PlantillaBordeSuperior,
        const TArray<FilaPlantilla>& PlantillaMurosInferiores,
        const TArray<FilaPlantilla>& PlantillaMurosSuperiores,
        float TamanoCelda = 100.0f);

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
    void InicializarPlantillas();
    void LimpiarActoresDelMundo(TSubclassOf<AActor> ClaseActorAExcluir = nullptr);
};