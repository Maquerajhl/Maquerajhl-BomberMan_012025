#include "BombermanGameFlowFacade.h"
#include "BomberMan_012025GameMode.h"
#include "Kismet/GameplayStatics.h"

// Constructor
UBombermanGameFlowFacade::UBombermanGameFlowFacade()
{
	// Inicialización de las variables de estado.
	CurrentEnemiesAlive = 0;
	PlayerLives = 3; // El jugador empieza con 3 vidas por defecto.
}

// Inicializa la fachada, recibiendo una referencia al GameMode.
void UBombermanGameFlowFacade::Initialize(ABomberMan_012025GameMode* OwningGameMode)
{
	OwnerGameMode = OwningGameMode;

	UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Initialized."));
}

// Inicia una nueva ronda de juego.
// Aquí el facade orquesta varios subsistemas (nivel, jugador, enemigos)
void UBombermanGameFlowFacade::StartGameRound()
{
	if (!OwnerGameMode.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("BombermanGameFlowFacade: OwnerGameMode is not valid. Cannot start round."));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Starting new game round!"));

	// El facade delega en métodos internos que simulan la interacción con subsistemas
	SetupLevel();
	SpawnPlayer();
	SpawnEnemies();
	ResetPlayerState();

	// Para fines de prueba, establecemos un número fijo de enemigos.
	CurrentEnemiesAlive = 5;
	PlayerLives = 3; // Reinicia las vidas al inicio de la ronda.
}

// Finaliza la ronda de juego.
// El facade gestiona la lógica de finalización, que podría involucrar guardar progreso, etc.
void UBombermanGameFlowFacade::EndGameRound(bool bPlayerWon)
{
	if (!OwnerGameMode.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("BombermanGameFlowFacade: OwnerGameMode is not valid. Cannot end round."));
		return;
	}

	if (bPlayerWon)
	{
		UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Player WON the round!"));
		// Lógica para la victoria.
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Player LOST the round!"));
		// Lógica para la derrota.
	}

	// Lógica de limpieza al final de la ronda.
}

// Maneja la lógica cuando el jugador muere.
// El facade gestiona el estado del jugador y decide si el juego termina o si el jugador revive.
void UBombermanGameFlowFacade::HandlePlayerDeath()
{
	if (!OwnerGameMode.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("BombermanGameFlowFacade: OwnerGameMode is not valid. Cannot handle player death."));
		return;
	}

	PlayerLives--;
	UE_LOG(LogTemp, Warning, TEXT("BombermanGameFlowFacade: Player Died! Remaining lives: %d"), PlayerLives);

	if (PlayerLives <= 0)
	{
		UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Player has no lives left. Game Over!"));
		EndGameRound(false);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Player respawning..."));
	}
}

// Notifica a la fachada que un enemigo ha sido eliminado.
// El facade actualiza el contador de enemigos y verifica si el jugador ha ganado.
void UBombermanGameFlowFacade::OnEnemyKilled()
{
	CurrentEnemiesAlive--;
	UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Enemy killed! Remaining enemies: %d"), CurrentEnemiesAlive);

	if (CurrentEnemiesAlive <= 0)
	{
		UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: All enemies defeated!"));
		EndGameRound(true);
	}
}

// --- Métodos internos simulados ---

void UBombermanGameFlowFacade::SetupLevel()
{
	UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Setting up level layout... (Simulated)"));
}

void UBombermanGameFlowFacade::SpawnEnemies()
{
	UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Spawning enemies... (Simulated)"));
}

void UBombermanGameFlowFacade::SpawnPlayer()
{
	UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Spawning player... (Simulated)"));
}

void UBombermanGameFlowFacade::ResetPlayerState()
{
	UE_LOG(LogTemp, Log, TEXT("BombermanGameFlowFacade: Resetting player state... (Simulated)"));
}