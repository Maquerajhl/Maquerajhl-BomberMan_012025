// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBurbuja.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h" 

ABloqueBurbuja::ABloqueBurbuja()
{
	// Cargar la malla específica para el Bloque de Acero en el constructor
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAceroAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	// **¡IMPORTANTE!** Cambia esta ruta a tu malla de acero real.
	if (MallaAceroAsset.Succeeded())
	{
		MallaBloque->SetStaticMesh(MallaAceroAsset.Object);
		// Opcional: MallaBloque->SetRelativeScale3D(FVector(1.0f)); 
	}
}

void ABloqueBurbuja::InicializarMallaBloque()
{
	// poner malla :) 

}


