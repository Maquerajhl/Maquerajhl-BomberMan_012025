// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ACMovimientoAleatorio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACMovimientoAleatorio() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UACMovimientoAleatorio();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UACMovimientoAleatorio_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UACMovimientoAleatorio
void UACMovimientoAleatorio::StaticRegisterNativesUACMovimientoAleatorio()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACMovimientoAleatorio);
UClass* Z_Construct_UClass_UACMovimientoAleatorio_NoRegister()
{
	return UACMovimientoAleatorio::StaticClass();
}
struct Z_Construct_UClass_UACMovimientoAleatorio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ACMovimientoAleatorio.h" },
		{ "ModuleRelativePath", "ACMovimientoAleatorio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRadius_MetaData[] = {
		{ "ModuleRelativePath", "ACMovimientoAleatorio.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACMovimientoAleatorio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UACMovimientoAleatorio_Statics::NewProp_MovementRadius = { "MovementRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACMovimientoAleatorio, MovementRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRadius_MetaData), NewProp_MovementRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACMovimientoAleatorio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACMovimientoAleatorio_Statics::NewProp_MovementRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMovimientoAleatorio_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UACMovimientoAleatorio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACMovimientoAleatorio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UACMovimientoAleatorio_Statics::ClassParams = {
	&UACMovimientoAleatorio::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UACMovimientoAleatorio_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UACMovimientoAleatorio_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACMovimientoAleatorio_Statics::Class_MetaDataParams), Z_Construct_UClass_UACMovimientoAleatorio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UACMovimientoAleatorio()
{
	if (!Z_Registration_Info_UClass_UACMovimientoAleatorio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACMovimientoAleatorio.OuterSingleton, Z_Construct_UClass_UACMovimientoAleatorio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UACMovimientoAleatorio.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UACMovimientoAleatorio>()
{
	return UACMovimientoAleatorio::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UACMovimientoAleatorio);
UACMovimientoAleatorio::~UACMovimientoAleatorio() {}
// End Class UACMovimientoAleatorio

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACMovimientoAleatorio_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UACMovimientoAleatorio, UACMovimientoAleatorio::StaticClass, TEXT("UACMovimientoAleatorio"), &Z_Registration_Info_UClass_UACMovimientoAleatorio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACMovimientoAleatorio), 2386413027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACMovimientoAleatorio_h_136189670(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACMovimientoAleatorio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACMovimientoAleatorio_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
