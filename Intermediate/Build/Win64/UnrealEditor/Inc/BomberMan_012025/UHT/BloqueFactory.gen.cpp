// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueFactory() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueFactory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueFactory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueFactory
void ABloqueFactory::StaticRegisterNativesABloqueFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueFactory);
UClass* Z_Construct_UClass_ABloqueFactory_NoRegister()
{
	return ABloqueFactory::StaticClass();
}
struct Z_Construct_UClass_ABloqueFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declaraci\xef\xbf\xbdn adelantada\n" },
#endif
		{ "IncludePath", "BloqueFactory.h" },
		{ "ModuleRelativePath", "BloqueFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaraci\xef\xbf\xbdn adelantada" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueFactory_Statics::ClassParams = {
	&ABloqueFactory::StaticClass,
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
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueFactory()
{
	if (!Z_Registration_Info_UClass_ABloqueFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueFactory.OuterSingleton, Z_Construct_UClass_ABloqueFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueFactory.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueFactory>()
{
	return ABloqueFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueFactory);
ABloqueFactory::~ABloqueFactory() {}
// End Class ABloqueFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueFactory, ABloqueFactory::StaticClass, TEXT("ABloqueFactory"), &Z_Registration_Info_UClass_ABloqueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueFactory), 1364181092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueFactory_h_3558238357(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
