// Fill out your copyright notice in the Description page of Project Settings.

#include "BloqueConcreto.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h" 

ABloqueConcreto::ABloqueConcreto()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAceroAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (MallaAceroAsset.Succeeded())
	{
		MallaBloque->SetStaticMesh(MallaAceroAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialEmisivo(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'")); // Reemplaza con tu material emisivo
	if (MaterialEmisivo.Succeeded())
	{
		MallaBloque->SetMaterial(0, MaterialEmisivo.Object);
	}
}

void ABloqueConcreto::InicializarMallaBloque()
{
	// arreglar la malla del bloque de concreto a futuro :)
}
