// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueAceroFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueAceroFactory() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueAceroFactory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueAceroFactory_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueFactory();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueAceroFactory
void ABloqueAceroFactory::StaticRegisterNativesABloqueAceroFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueAceroFactory);
UClass* Z_Construct_UClass_ABloqueAceroFactory_NoRegister()
{
	return ABloqueAceroFactory::StaticClass();
}
struct Z_Construct_UClass_ABloqueAceroFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueAceroFactory.h" },
		{ "ModuleRelativePath", "BloqueAceroFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueAceroFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueAceroFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAceroFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueAceroFactory_Statics::ClassParams = {
	&ABloqueAceroFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAceroFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueAceroFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueAceroFactory()
{
	if (!Z_Registration_Info_UClass_ABloqueAceroFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueAceroFactory.OuterSingleton, Z_Construct_UClass_ABloqueAceroFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueAceroFactory.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueAceroFactory>()
{
	return ABloqueAceroFactory::StaticClass();
}
ABloqueAceroFactory::ABloqueAceroFactory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueAceroFactory);
ABloqueAceroFactory::~ABloqueAceroFactory() {}
// End Class ABloqueAceroFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueAceroFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueAceroFactory, ABloqueAceroFactory::StaticClass, TEXT("ABloqueAceroFactory"), &Z_Registration_Info_UClass_ABloqueAceroFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueAceroFactory), 2944127788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueAceroFactory_h_3200789658(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueAceroFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueAceroFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
