// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/EnemigoAnimal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAnimal() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAnimal();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAnimal_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoAnimal
void AEnemigoAnimal::StaticRegisterNativesAEnemigoAnimal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoAnimal);
UClass* Z_Construct_UClass_AEnemigoAnimal_NoRegister()
{
	return AEnemigoAnimal::StaticClass();
}
struct Z_Construct_UClass_AEnemigoAnimal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAnimal.h" },
		{ "ModuleRelativePath", "EnemigoAnimal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAnimal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoAnimal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAnimal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAnimal_Statics::ClassParams = {
	&AEnemigoAnimal::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAnimal_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoAnimal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoAnimal()
{
	if (!Z_Registration_Info_UClass_AEnemigoAnimal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoAnimal.OuterSingleton, Z_Construct_UClass_AEnemigoAnimal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoAnimal.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoAnimal>()
{
	return AEnemigoAnimal::StaticClass();
}
AEnemigoAnimal::AEnemigoAnimal() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAnimal);
AEnemigoAnimal::~AEnemigoAnimal() {}
// End Class AEnemigoAnimal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoAnimal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoAnimal, AEnemigoAnimal::StaticClass, TEXT("AEnemigoAnimal"), &Z_Registration_Info_UClass_AEnemigoAnimal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoAnimal), 4181257614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoAnimal_h_4178820872(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoAnimal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoAnimal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
