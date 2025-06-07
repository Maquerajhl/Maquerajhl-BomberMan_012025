// Fill out your copyright notice in the Description page of Project Settings.

#include "Obstaculo.h"

// Sets default values
AObstaculo::AObstaculo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	MallaObstaculo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaObstaculo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaObstaculo.Succeeded())
	{
		MallaObstaculo->SetStaticMesh(ObjetoMallaObstaculo.Object);
		MallaObstaculo->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
