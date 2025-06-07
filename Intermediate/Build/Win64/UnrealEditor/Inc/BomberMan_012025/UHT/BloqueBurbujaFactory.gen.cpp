// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueBurbujaFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBurbujaFactory() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBurbujaFactory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBurbujaFactory_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueFactory();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueBurbujaFactory
void ABloqueBurbujaFactory::StaticRegisterNativesABloqueBurbujaFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBurbujaFactory);
UClass* Z_Construct_UClass_ABloqueBurbujaFactory_NoRegister()
{
	return ABloqueBurbujaFactory::StaticClass();
}
struct Z_Construct_UClass_ABloqueBurbujaFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueBurbujaFactory.h" },
		{ "ModuleRelativePath", "BloqueBurbujaFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBurbujaFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueBurbujaFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbujaFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBurbujaFactory_Statics::ClassParams = {
	&ABloqueBurbujaFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbujaFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBurbujaFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBurbujaFactory()
{
	if (!Z_Registration_Info_UClass_ABloqueBurbujaFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBurbujaFactory.OuterSingleton, Z_Construct_UClass_ABloqueBurbujaFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBurbujaFactory.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueBurbujaFactory>()
{
	return ABloqueBurbujaFactory::StaticClass();
}
ABloqueBurbujaFactory::ABloqueBurbujaFactory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBurbujaFactory);
ABloqueBurbujaFactory::~ABloqueBurbujaFactory() {}
// End Class ABloqueBurbujaFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueBurbujaFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBurbujaFactory, ABloqueBurbujaFactory::StaticClass, TEXT("ABloqueBurbujaFactory"), &Z_Registration_Info_UClass_ABloqueBurbujaFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBurbujaFactory), 1377489516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueBurbujaFactory_h_3031866105(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueBurbujaFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueBurbujaFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
