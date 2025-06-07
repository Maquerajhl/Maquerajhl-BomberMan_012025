// Fill out your copyright notice in the Description page of Project Settings.

#include "Puerta.h"

// Sets default values
APuerta::APuerta()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaPuerta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	MallaPuerta->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaPuerta(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));

	if (ObjetoMallaPuerta.Succeeded())
	{
		MallaPuerta->SetStaticMesh(ObjetoMallaPuerta.Object);
		MallaPuerta->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
}

// Called when the game starts or when spawned
void APuerta::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APuerta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
