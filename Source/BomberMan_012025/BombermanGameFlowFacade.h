#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BombermanGameFlowFacade.generated.h"

// Forward declaration del GameMode
class ABomberMan_012025GameMode;

/**
 * @brief Fachada para el flujo principal del juego de Bomberman.
 *
 * Implementa el patr�n Facade, proporcionando una interfaz simplificada
 * para gestionar el flujo de juego, encapsulando la complejidad de m�ltiples subsistemas.
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

	// --- M�todos de alto nivel que el GameMode u otras clases C++ llamar�n ---

	/** Inicia una nueva ronda de juego. */
	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void StartGameRound();

	/** Finaliza la ronda de juego. */
	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void EndGameRound(bool bPlayerWon);

	/** Maneja la l�gica cuando el jugador muere. */
	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void HandlePlayerDeath();

	/** Notifica a la fachada que un enemigo ha sido eliminado. */
	UFUNCTION(BlueprintCallable, Category = "GameFlow")
	void OnEnemyKilled();

protected:
	// Referencia d�bil al GameMode propietario.
	TWeakObjectPtr<ABomberMan_012025GameMode> OwnerGameMode;

	// Variables de estado interno que la fachada maneja.
	int32 CurrentEnemiesAlive;
	int32 PlayerLives;

	// --- M�todos internos privados (la fachada los usa para su propia l�gica) ---

	UFUNCTION()
	void SetupLevel();

	UFUNCTION()
	void SpawnEnemies();

	UFUNCTION()
	void SpawnPlayer();

	UFUNCTION()
	void ResetPlayerState();
};