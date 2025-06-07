#include "BloqueAcero.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h" 

ABloqueAcero::ABloqueAcero()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAceroAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (MallaAceroAsset.Succeeded())
	{
		MallaBloque->SetStaticMesh(MallaAceroAsset.Object);
		//MallaBloque->SetRelativeScale3D(FVector(1.0f)); 
	}

	// 1. Cargar un material simple con textura de color base
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialTexturaSimple(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'")); // Reemplaza con tu propio material
	if (MaterialTexturaSimple.Succeeded())
	{
		MallaBloque->SetMaterial(0, MaterialTexturaSimple.Object);
	}
}

void ABloqueAcero::InicializarMallaBloque()
{
	// Este m�todo se implementa porque es virtual puro.
	// La asignaci�n de la malla ya se hizo en el constructor.
	// Podr�as agregar l�gica de inicializaci�n adicional aqu� si fuera necesario.
}