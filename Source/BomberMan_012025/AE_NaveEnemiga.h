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

    // --- Nuevas propiedades para el patrullaje autónomo ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento|PatrullaAutonoma")
    FVector DireccionActualPatrulla; // La dirección en la que la nave se está moviendo.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento|PatrullaAutonoma")
    float TiempoCambioDireccionMin; // Tiempo mínimo antes de cambiar de dirección.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento|PatrullaAutonoma")
    float TiempoCambioDireccionMax; // Tiempo máximo antes de cambiar de dirección.

    float TiempoHastaSiguienteCambio; // Contador interno para el próximo cambio de dirección.
    // -------------------------------------------------------------

    UFUNCTION(BlueprintCallable, Category = "Nave")
    void Mover(float DeltaTime);

    // --- Nueva función para la lógica de cambio de dirección ---
    UFUNCTION(BlueprintCallable, Category = "Nave|Movimiento|PatrullaAutonoma")
    void CambiarDireccionAleatoria(); // Para cambiar a una nueva dirección de forma autónoma.
    // -------------------------------------------------
};