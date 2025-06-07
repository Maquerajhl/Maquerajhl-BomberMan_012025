#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "AE_NaveEnemiga.generated.h"

UCLASS()
class BOMBERMAN_012025_API AAE_NaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	AAE_NaveEnemiga();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Nave")
	UStaticMeshComponent* NaveMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento")
	float VelocidadMovimiento;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento|PatrullaAutonoma")
	FVector DireccionActualPatrulla; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento|PatrullaAutonoma")
	float TiempoCambioDireccionMin; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento|PatrullaAutonoma")
	float TiempoCambioDireccionMax; 

	float TiempoHastaSiguienteCambio; 
	UFUNCTION(BlueprintCallable, Category = "Nave")
	void Mover(float DeltaTime);


	UFUNCTION(BlueprintCallable, Category = "Nave|Movimiento|PatrullaAutonoma")
	void CambiarDireccionAleatoria(); 
};