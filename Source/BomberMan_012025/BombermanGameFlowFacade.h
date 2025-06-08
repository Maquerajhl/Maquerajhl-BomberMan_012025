#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BombermanGameFlowFacade.generated.h"

// Forward declaration del GameMode
class ABomberMan_012025GameMode;

/**
 * @brief Fachada para el flujo principal del juego de Bomberman.
 *
 * Implementa el patrón Facade, proporcionando una interfaz simplificada
 * para gestionar el flujo de juego, encapsulando la complejidad de múltiples subsistemas.
 */
UCLASS()
class BOMBERMAN_012025_API UBombermanGameFlowFacade : public UObject
{
	GENERATED_BODY()

public:
	// Constructor por defecto.
	UBombermanGameFlowFacade();

	// Inicializa la fachada con una referencia al GameMode que la "posee".
	void Initialize(ABomberMan_012025GameMode* OwningGameMode);

	// --- Métodos de alto nivel que el GameMode u otras clases C++ llamarán ---

	/** Inicia una nueva ronda de juego. */
	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void StartGameRound();

	/** Finaliza la ronda de juego. */
	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void EndGameRound(bool bPlayerWon);

	/** Maneja la lógica cuando el jugador muere. */
	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void HandlePlayerDeath();

	/** Notifica a la fachada que un enemigo ha sido eliminado. */
	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void OnEnemyKilled();

protected:
	// Referencia débil al GameMode propietario.
	TWeakObjectPtr<ABomberMan_012025GameMode> OwnerGameMode;

	// Variables de estado interno que la fachada maneja.
	int32 CurrentEnemiesAlive;
	int32 PlayerLives;

	// --- Métodos internos privados (la fachada los usa para su propia lógica) ---

	UFUNCTION()
	void SetupLevel();

	UFUNCTION()
	void SpawnEnemies();

	UFUNCTION()
	void SpawnPlayer();

	UFUNCTION()
	void ResetPlayerState();
};