// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBurbuja.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h" 

ABloqueBurbuja::ABloqueBurbuja()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAceroAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (MallaAceroAsset.Succeeded())
	{
		MallaBloque->SetStaticMesh(MallaAceroAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialComplejo(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'")); // Un material de ladrillos del Starter Content
	if (MaterialComplejo.Succeeded())
	{
		MallaBloque->SetMaterial(0, MaterialComplejo.Object);
	}
}

void ABloqueBurbuja::InicializarMallaBloque()
{
	// poner malla :) 

}


