// Fill out your copyright notice in the Description page of Project Settings.

#include "BloqueMadera.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h" 

ABloqueMadera::ABloqueMadera()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAceroAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MallaAceroAsset.Succeeded())
	{
		MallaBloque->SetStaticMesh(MallaAceroAsset.Object);
		//MallaBloque->SetRelativeScale3D(FVector(1.0f)); 
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialTransparente(TEXT("Material'/Game/StarterContent/Materials/M_Glass.M_Glass'")); // Un material de cristal del Starter Content
	if (MaterialTransparente.Succeeded())
	{
		MallaBloque->SetMaterial(0, MaterialTransparente.Object);
	}
}

void ABloqueMadera::InicializarMallaBloque()
{
	// proximamente : ) 
}
