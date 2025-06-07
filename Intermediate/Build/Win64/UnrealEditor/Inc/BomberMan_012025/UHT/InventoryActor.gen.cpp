// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/InventoryActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryActor() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AInventoryActor();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AInventoryActor
void AInventoryActor::StaticRegisterNativesAInventoryActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInventoryActor);
UClass* Z_Construct_UClass_AInventoryActor_NoRegister()
{
	return AInventoryActor::StaticClass();
}
struct Z_Construct_UClass_AInventoryActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "InventoryActor.h" },
		{ "ModuleRelativePath", "InventoryActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInventoryActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventoryActor_Statics::ClassParams = {
	&AInventoryActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInventoryActor()
{
	if (!Z_Registration_Info_UClass_AInventoryActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventoryActor.OuterSingleton, Z_Construct_UClass_AInventoryActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInventoryActor.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AInventoryActor>()
{
	return AInventoryActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryActor);
AInventoryActor::~AInventoryActor() {}
// End Class AInventoryActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_InventoryActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInventoryActor, AInventoryActor::StaticClass, TEXT("AInventoryActor"), &Z_Registration_Info_UClass_AInventoryActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventoryActor), 3241497432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_InventoryActor_h_4084857566(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_InventoryActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_InventoryActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
