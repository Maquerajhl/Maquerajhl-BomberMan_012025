// BloqueFactory.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueFactory.generated.h"

class ABloque; 

UCLASS(Abstract) 
class BOMBERMAN_012025_API ABloqueFactory : public AActor
{
	GENERATED_BODY()

public:
	ABloqueFactory();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual ABloque* CrearBloque() PURE_VIRTUAL(CrearBloque, return nullptr;);

};