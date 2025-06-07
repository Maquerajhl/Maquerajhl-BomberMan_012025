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
}

void ABloqueAcero::InicializarMallaBloque()
{
	// Este método se implementa porque es virtual puro.
	// La asignación de la malla ya se hizo en el constructor.
	// Podrías agregar lógica de inicialización adicional aquí si fuera necesario.
}