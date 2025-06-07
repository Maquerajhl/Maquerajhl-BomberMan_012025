#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorLaberintoBuilder.h"
#include "BloqueFactory.h"
#include "Bloque.h"
//#include "BloqueFactory.h"
#include "BloqueAceroFactory.h"
#include "BloqueBurbujaFactory.h"
#include "BloqueConcretoFactory.h"
#include "BloqueLadrilloFactory.h"
#include "BloqueMaderaFactory.h"
#include "ConstructorLaberintoConcreto.generated.h"

UCLASS()
class BOMBERMAN_012025_API AConstructorLaberintoConcreto : public AActor, public IConstructorLaberintoBuilder
{
    GENERATED_BODY()

public:
    AConstructorLaberintoConcreto();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    virtual void Reiniciar() override;
    virtual void ConstruirCapa(const TArray<TArray<int32>>& Plantilla, int32 NivelAltura, float TamanoCelda) override;
    virtual UMaestroLaberintoProducto* ObtenerResultado() override;

private:
    UPROPERTY()
    TMap<ECodigoBloque, ABloqueFactory*> FactoriasBloques;

    UPROPERTY()
    UMaestroLaberintoProducto* LaberintoActualProducto;
};