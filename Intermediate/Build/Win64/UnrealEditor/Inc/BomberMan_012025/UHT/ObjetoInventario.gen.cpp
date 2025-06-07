// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ObjetoInventario.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjetoInventario() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObjetoInventario();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObjetoInventario_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AObjetoInventario
void AObjetoInventario::StaticRegisterNativesAObjetoInventario()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObjetoInventario);
UClass* Z_Construct_UClass_AObjetoInventario_NoRegister()
{
	return AObjetoInventario::StaticClass();
}
struct Z_Construct_UClass_AObjetoInventario_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjetoInventario.h" },
		{ "ModuleRelativePath", "ObjetoInventario.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjetoInventario>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObjetoInventario_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoInventario_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObjetoInventario_Statics::ClassParams = {
	&AObjetoInventario::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoInventario_Statics::Class_MetaDataParams), Z_Construct_UClass_AObjetoInventario_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObjetoInventario()
{
	if (!Z_Registration_Info_UClass_AObjetoInventario.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObjetoInventario.OuterSingleton, Z_Construct_UClass_AObjetoInventario_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObjetoInventario.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AObjetoInventario>()
{
	return AObjetoInventario::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObjetoInventario);
AObjetoInventario::~AObjetoInventario() {}
// End Class AObjetoInventario

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ObjetoInventario_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObjetoInventario, AObjetoInventario::StaticClass, TEXT("AObjetoInventario"), &Z_Registration_Info_UClass_AObjetoInventario, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObjetoInventario), 2925313370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ObjetoInventario_h_865937360(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ObjetoInventario_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ObjetoInventario_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
