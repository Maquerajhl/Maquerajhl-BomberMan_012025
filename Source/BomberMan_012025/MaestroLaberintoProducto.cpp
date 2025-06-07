// BomberMan_012025/Source/BomberMan_012025/MaestroLaberintoProducto.cpp
#include "MaestroLaberintoProducto.h" // �Cambio de include!
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Bloque.h" // �Aseg�rate de incluir Bloque.h aqu� para que IsPendingKill() est� disponible!

UMaestroLaberintoProducto::UMaestroLaberintoProducto()
{
    // Constructor simple
}

void UMaestroLaberintoProducto::DestruirTodosLosBloques()
{
    UWorld* Mundo = GetWorld();
    if (!Mundo) return;

    int32 BloquesEliminados = 0;
    for (ABloque* Bloque : BloquesGenerados)
    {
        // IsPendingKill() es un m�todo de AActor. Aseg�rate que ABloque herede de AActor.
       // if (Bloque && !Bloque->IsPendingKill())
       // {
        //    Bloque->Destroy();
        //    BloquesEliminados++;
        //}
    }
    BloquesGenerados.Empty();
    FString Mensaje = FString::Printf(TEXT("MaestroLaberintoProducto: %d bloques asociados a este laberinto han sido destruidos."), BloquesEliminados);
    UE_LOG(LogTemp, Log, TEXT("%s"), *Mensaje);
    if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, Mensaje);
}