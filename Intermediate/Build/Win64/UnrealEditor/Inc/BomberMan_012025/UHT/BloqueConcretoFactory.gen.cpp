// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BloqueConcretoFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueConcretoFactory() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueConcretoFactory();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueConcretoFactory_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueFactory();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueConcretoFactory
void ABloqueConcretoFactory::StaticRegisterNativesABloqueConcretoFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueConcretoFactory);
UClass* Z_Construct_UClass_ABloqueConcretoFactory_NoRegister()
{
	return ABloqueConcretoFactory::StaticClass();
}
struct Z_Construct_UClass_ABloqueConcretoFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueConcretoFactory.h" },
		{ "ModuleRelativePath", "BloqueConcretoFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueConcretoFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueConcretoFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueConcretoFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueConcretoFactory_Statics::ClassParams = {
	&ABloqueConcretoFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueConcretoFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueConcretoFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueConcretoFactory()
{
	if (!Z_Registration_Info_UClass_ABloqueConcretoFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueConcretoFactory.OuterSingleton, Z_Construct_UClass_ABloqueConcretoFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueConcretoFactory.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueConcretoFactory>()
{
	return ABloqueConcretoFactory::StaticClass();
}
ABloqueConcretoFactory::ABloqueConcretoFactory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueConcretoFactory);
ABloqueConcretoFactory::~ABloqueConcretoFactory() {}
// End Class ABloqueConcretoFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueConcretoFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueConcretoFactory, ABloqueConcretoFactory::StaticClass, TEXT("ABloqueConcretoFactory"), &Z_Registration_Info_UClass_ABloqueConcretoFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueConcretoFactory), 3610041408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueConcretoFactory_h_3629483017(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueConcretoFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BloqueConcretoFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
