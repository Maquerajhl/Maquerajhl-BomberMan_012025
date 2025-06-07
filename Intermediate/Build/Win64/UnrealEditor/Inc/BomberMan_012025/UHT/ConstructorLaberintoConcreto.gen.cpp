// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ConstructorLaberintoConcreto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorLaberintoConcreto() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueFactory_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AConstructorLaberintoConcreto();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AConstructorLaberintoConcreto_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UMaestroLaberintoProducto_NoRegister();
BOMBERMAN_012025_API UEnum* Z_Construct_UEnum_BomberMan_012025_ECodigoBloque();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AConstructorLaberintoConcreto
void AConstructorLaberintoConcreto::StaticRegisterNativesAConstructorLaberintoConcreto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConstructorLaberintoConcreto);
UClass* Z_Construct_UClass_AConstructorLaberintoConcreto_NoRegister()
{
	return AConstructorLaberintoConcreto::StaticClass();
}
struct Z_Construct_UClass_AConstructorLaberintoConcreto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ConstructorLaberintoConcreto.h" },
		{ "ModuleRelativePath", "ConstructorLaberintoConcreto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoriasBloques_MetaData[] = {
		{ "ModuleRelativePath", "ConstructorLaberintoConcreto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaberintoActualProducto_MetaData[] = {
		{ "ModuleRelativePath", "ConstructorLaberintoConcreto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactoriasBloques_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FactoriasBloques_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FactoriasBloques_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FactoriasBloques;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaberintoActualProducto;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructorLaberintoConcreto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_FactoriasBloques_ValueProp = { "FactoriasBloques", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ABloqueFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_FactoriasBloques_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_FactoriasBloques_Key_KeyProp = { "FactoriasBloques_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_BomberMan_012025_ECodigoBloque, METADATA_PARAMS(0, nullptr) }; // 251386798
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_FactoriasBloques = { "FactoriasBloques", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConstructorLaberintoConcreto, FactoriasBloques), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoriasBloques_MetaData), NewProp_FactoriasBloques_MetaData) }; // 251386798
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_LaberintoActualProducto = { "LaberintoActualProducto", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConstructorLaberintoConcreto, LaberintoActualProducto), Z_Construct_UClass_UMaestroLaberintoProducto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaberintoActualProducto_MetaData), NewProp_LaberintoActualProducto_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_FactoriasBloques_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_FactoriasBloques_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_FactoriasBloques_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_FactoriasBloques,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::NewProp_LaberintoActualProducto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::ClassParams = {
	&AConstructorLaberintoConcreto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::Class_MetaDataParams), Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AConstructorLaberintoConcreto()
{
	if (!Z_Registration_Info_UClass_AConstructorLaberintoConcreto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConstructorLaberintoConcreto.OuterSingleton, Z_Construct_UClass_AConstructorLaberintoConcreto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AConstructorLaberintoConcreto.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AConstructorLaberintoConcreto>()
{
	return AConstructorLaberintoConcreto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructorLaberintoConcreto);
AConstructorLaberintoConcreto::~AConstructorLaberintoConcreto() {}
// End Class AConstructorLaberintoConcreto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ConstructorLaberintoConcreto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AConstructorLaberintoConcreto, AConstructorLaberintoConcreto::StaticClass, TEXT("AConstructorLaberintoConcreto"), &Z_Registration_Info_UClass_AConstructorLaberintoConcreto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConstructorLaberintoConcreto), 3334105464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ConstructorLaberintoConcreto_h_2775544580(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ConstructorLaberintoConcreto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ConstructorLaberintoConcreto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
