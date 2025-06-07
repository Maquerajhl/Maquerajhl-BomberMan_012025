// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimalAcuatico.h"


AEnemigoAnimalAcuatico::AEnemigoAnimalAcuatico()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/AfricanAnimalsPack/Crocodile/Meshes/SK_Crocodile.SK_Crocodile'"));
	if (MeshContainer.Succeeded())
	{
		//Super::GetMesh()->SetSkeletalMesh(MeshContainer.Object);
		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
	}
}
