// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueMaderaFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMaderaFactory() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueFactory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueMaderaFactory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueMaderaFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueMaderaFactory
void ABloqueMaderaFactory::StaticRegisterNativesABloqueMaderaFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueMaderaFactory);
UClass* Z_Construct_UClass_ABloqueMaderaFactory_NoRegister()
{
	return ABloqueMaderaFactory::StaticClass();
}
struct Z_Construct_UClass_ABloqueMaderaFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueMaderaFactory.h" },
		{ "ModuleRelativePath", "BloqueMaderaFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMaderaFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueMaderaFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMaderaFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMaderaFactory_Statics::ClassParams = {
	&ABloqueMaderaFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMaderaFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueMaderaFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueMaderaFactory()
{
	if (!Z_Registration_Info_UClass_ABloqueMaderaFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueMaderaFactory.OuterSingleton, Z_Construct_UClass_ABloqueMaderaFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueMaderaFactory.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueMaderaFactory>()
{
	return ABloqueMaderaFactory::StaticClass();
}
ABloqueMaderaFactory::ABloqueMaderaFactory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMaderaFactory);
ABloqueMaderaFactory::~ABloqueMaderaFactory() {}
// End Class ABloqueMaderaFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueMaderaFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueMaderaFactory, ABloqueMaderaFactory::StaticClass, TEXT("ABloqueMaderaFactory"), &Z_Registration_Info_UClass_ABloqueMaderaFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueMaderaFactory), 3914957557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueMaderaFactory_h_3645498851(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueMaderaFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueMaderaFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
