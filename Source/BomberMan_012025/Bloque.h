#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

class UStaticMeshComponent;



UCLASS(Abstract)
class BOMBERMAN_012025_API ABloque : public AActor
{
	GENERATED_BODY()

public:
	ABloque();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaBloque;

protected:

	virtual void InicializarMallaBloque() PURE_VIRTUAL(InicializarMallaBloque, );

protected:
	virtual void BeginPlay() override; 

public:
	virtual void Tick(float DeltaTime) override;
};