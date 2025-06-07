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

	// ... (inicialización del componente y carga del cubo como en el ejemplo 1) ...

// 2. Cargar un material más complejo con varias texturas (ej. Normal Map, Roughness)
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


