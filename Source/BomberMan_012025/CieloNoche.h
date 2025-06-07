// CieloNoche.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CieloNoche.generated.h"

UCLASS()
class BOMBERMAN_012025_API ACieloNoche : public AActor
{
	GENERATED_BODY()

public:
	ACieloNoche();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* SkyMesh;
};
