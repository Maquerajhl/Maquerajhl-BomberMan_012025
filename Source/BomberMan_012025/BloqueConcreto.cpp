// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h" 

ABloqueConcreto::ABloqueConcreto()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAceroAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	// **¡IMPORTANTE!** Cambia esta ruta a tu malla de acero real.
	if (MallaAceroAsset.Succeeded())
	{
		MallaBloque->SetStaticMesh(MallaAceroAsset.Object);
		// Opcional: MallaBloque->SetRelativeScale3D(FVector(1.0f)); 
	}
}

void ABloqueConcreto::InicializarMallaBloque()
{
	// arreglar la malla del bloque de concreto a futuro :)
}
