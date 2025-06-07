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

    // --- Nuevas propiedades para el patrullaje aut�nomo ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento|PatrullaAutonoma")
    FVector DireccionActualPatrulla; // La direcci�n en la que la nave se est� moviendo.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento|PatrullaAutonoma")
    float TiempoCambioDireccionMin; // Tiempo m�nimo antes de cambiar de direcci�n.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nave|Movimiento|PatrullaAutonoma")
    float TiempoCambioDireccionMax; // Tiempo m�ximo antes de cambiar de direcci�n.

    float TiempoHastaSiguienteCambio; // Contador interno para el pr�ximo cambio de direcci�n.
    // -------------------------------------------------------------

    UFUNCTION(BlueprintCallable, Category = "Nave")
    void Mover(float DeltaTime);

    // --- Nueva funci�n para la l�gica de cambio de direcci�n ---
    UFUNCTION(BlueprintCallable, Category = "Nave|Movimiento|PatrullaAutonoma")
    void CambiarDireccionAleatoria(); // Para cambiar a una nueva direcci�n de forma aut�noma.
    // -------------------------------------------------
};