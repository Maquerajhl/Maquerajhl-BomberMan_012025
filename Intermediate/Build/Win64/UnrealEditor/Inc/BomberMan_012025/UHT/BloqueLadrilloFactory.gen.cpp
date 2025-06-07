// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueLadrilloFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLadrilloFactory() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueFactory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueLadrilloFactory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueLadrilloFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueLadrilloFactory
void ABloqueLadrilloFactory::StaticRegisterNativesABloqueLadrilloFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueLadrilloFactory);
UClass* Z_Construct_UClass_ABloqueLadrilloFactory_NoRegister()
{
	return ABloqueLadrilloFactory::StaticClass();
}
struct Z_Construct_UClass_ABloqueLadrilloFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueLadrilloFactory.h" },
		{ "ModuleRelativePath", "BloqueLadrilloFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLadrilloFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueLadrilloFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrilloFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLadrilloFactory_Statics::ClassParams = {
	&ABloqueLadrilloFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrilloFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueLadrilloFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueLadrilloFactory()
{
	if (!Z_Registration_Info_UClass_ABloqueLadrilloFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueLadrilloFactory.OuterSingleton, Z_Construct_UClass_ABloqueLadrilloFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueLadrilloFactory.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueLadrilloFactory>()
{
	return ABloqueLadrilloFactory::StaticClass();
}
ABloqueLadrilloFactory::ABloqueLadrilloFactory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLadrilloFactory);
ABloqueLadrilloFactory::~ABloqueLadrilloFactory() {}
// End Class ABloqueLadrilloFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueLadrilloFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueLadrilloFactory, ABloqueLadrilloFactory::StaticClass, TEXT("ABloqueLadrilloFactory"), &Z_Registration_Info_UClass_ABloqueLadrilloFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueLadrilloFactory), 3842845104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueLadrilloFactory_h_3277276232(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueLadrilloFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueLadrilloFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
