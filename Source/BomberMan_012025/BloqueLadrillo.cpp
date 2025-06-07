// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h" 


ABloqueLadrillo::ABloqueLadrillo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAceroAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MallaAceroAsset.Succeeded())
	{
		MallaBloque->SetStaticMesh(MallaAceroAsset.Object);
		//MallaBloque->SetRelativeScale3D(FVector(1.0f)); 
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBaseParaDinamico(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'")); // Un material con un par�metro de textura llamado "BaseTexture"
	MallaBloque->SetMaterial(0, MaterialBaseParaDinamico.Object);
}

void ABloqueLadrillo::BeginPlay()
{
	Super::BeginPlay();

}

void ABloqueLadrillo::InicializarMallaBloque()
{
	// por ahora :) 
}

