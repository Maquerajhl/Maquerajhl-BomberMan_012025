// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/EnemigoAnimalAcuatico.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAnimalAcuatico() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAnimalAcuatico();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAnimalAcuatico_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoAnimalAcuatico
void AEnemigoAnimalAcuatico::StaticRegisterNativesAEnemigoAnimalAcuatico()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoAnimalAcuatico);
UClass* Z_Construct_UClass_AEnemigoAnimalAcuatico_NoRegister()
{
	return AEnemigoAnimalAcuatico::StaticClass();
}
struct Z_Construct_UClass_AEnemigoAnimalAcuatico_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAnimalAcuatico.h" },
		{ "ModuleRelativePath", "EnemigoAnimalAcuatico.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAnimalAcuatico>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoAnimalAcuatico_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAnimalAcuatico_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAnimalAcuatico_Statics::ClassParams = {
	&AEnemigoAnimalAcuatico::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAnimalAcuatico_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoAnimalAcuatico_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoAnimalAcuatico()
{
	if (!Z_Registration_Info_UClass_AEnemigoAnimalAcuatico.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoAnimalAcuatico.OuterSingleton, Z_Construct_UClass_AEnemigoAnimalAcuatico_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoAnimalAcuatico.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoAnimalAcuatico>()
{
	return AEnemigoAnimalAcuatico::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAnimalAcuatico);
AEnemigoAnimalAcuatico::~AEnemigoAnimalAcuatico() {}
// End Class AEnemigoAnimalAcuatico

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoAnimalAcuatico_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoAnimalAcuatico, AEnemigoAnimalAcuatico::StaticClass, TEXT("AEnemigoAnimalAcuatico"), &Z_Registration_Info_UClass_AEnemigoAnimalAcuatico, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoAnimalAcuatico), 2149275978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoAnimalAcuatico_h_1992443171(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoAnimalAcuatico_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoAnimalAcuatico_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
