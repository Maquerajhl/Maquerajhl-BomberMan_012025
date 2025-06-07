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
	// Este m�todo se implementa porque es virtual puro.
	// La asignaci�n de la malla ya se hizo en el constructor.
	// Podr�as agregar l�gica de inicializaci�n adicional aqu� si fuera necesario.
}