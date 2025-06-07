// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/MaestroLaberintoProducto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaestroLaberintoProducto() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UMaestroLaberintoProducto();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UMaestroLaberintoProducto_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UMaestroLaberintoProducto Function DestruirTodosLosBloques
struct Z_Construct_UFunction_UMaestroLaberintoProducto_DestruirTodosLosBloques_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto|Producto" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Destruye todos los bloques asociados a este laberinto en el mundo\n" },
#endif
		{ "ModuleRelativePath", "MaestroLaberintoProducto.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destruye todos los bloques asociados a este laberinto en el mundo" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaestroLaberintoProducto_DestruirTodosLosBloques_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaestroLaberintoProducto, nullptr, "DestruirTodosLosBloques", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaestroLaberintoProducto_DestruirTodosLosBloques_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaestroLaberintoProducto_DestruirTodosLosBloques_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMaestroLaberintoProducto_DestruirTodosLosBloques()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaestroLaberintoProducto_DestruirTodosLosBloques_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaestroLaberintoProducto::execDestruirTodosLosBloques)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestruirTodosLosBloques();
	P_NATIVE_END;
}
// End Class UMaestroLaberintoProducto Function DestruirTodosLosBloques

// Begin Class UMaestroLaberintoProducto
void UMaestroLaberintoProducto::StaticRegisterNativesUMaestroLaberintoProducto()
{
	UClass* Class = UMaestroLaberintoProducto::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestruirTodosLosBloques", &UMaestroLaberintoProducto::execDestruirTodosLosBloques },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaestroLaberintoProducto);
UClass* Z_Construct_UClass_UMaestroLaberintoProducto_NoRegister()
{
	return UMaestroLaberintoProducto::StaticClass();
}
struct Z_Construct_UClass_UMaestroLaberintoProducto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Representa el laberinto terminado, una colecci\xef\xbf\xbdn de ABloque. Es el \"Producto\" del Patr\xef\xbf\xbdn Builder.\n */" },
#endif
		{ "IncludePath", "MaestroLaberintoProducto.h" },
		{ "ModuleRelativePath", "MaestroLaberintoProducto.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Representa el laberinto terminado, una colecci\xef\xbf\xbdn de ABloque. Es el \"Producto\" del Patr\xef\xbf\xbdn Builder." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloquesGenerados_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Propiedad para almacenar los bloques spawnados que forman este laberinto\n" },
#endif
		{ "ModuleRelativePath", "MaestroLaberintoProducto.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Propiedad para almacenar los bloques spawnados que forman este laberinto" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloquesGenerados_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloquesGenerados;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaestroLaberintoProducto_DestruirTodosLosBloques, "DestruirTodosLosBloques" }, // 3954495660
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaestroLaberintoProducto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaestroLaberintoProducto_Statics::NewProp_BloquesGenerados_Inner = { "BloquesGenerados", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaestroLaberintoProducto_Statics::NewProp_BloquesGenerados = { "BloquesGenerados", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaestroLaberintoProducto, BloquesGenerados), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloquesGenerados_MetaData), NewProp_BloquesGenerados_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaestroLaberintoProducto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaestroLaberintoProducto_Statics::NewProp_BloquesGenerados_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaestroLaberintoProducto_Statics::NewProp_BloquesGenerados,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaestroLaberintoProducto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaestroLaberintoProducto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaestroLaberintoProducto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaestroLaberintoProducto_Statics::ClassParams = {
	&UMaestroLaberintoProducto::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMaestroLaberintoProducto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaestroLaberintoProducto_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaestroLaberintoProducto_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaestroLaberintoProducto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaestroLaberintoProducto()
{
	if (!Z_Registration_Info_UClass_UMaestroLaberintoProducto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaestroLaberintoProducto.OuterSingleton, Z_Construct_UClass_UMaestroLaberintoProducto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaestroLaberintoProducto.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UMaestroLaberintoProducto>()
{
	return UMaestroLaberintoProducto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaestroLaberintoProducto);
UMaestroLaberintoProducto::~UMaestroLaberintoProducto() {}
// End Class UMaestroLaberintoProducto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_MaestroLaberintoProducto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaestroLaberintoProducto, UMaestroLaberintoProducto::StaticClass, TEXT("UMaestroLaberintoProducto"), &Z_Registration_Info_UClass_UMaestroLaberintoProducto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaestroLaberintoProducto), 4130762881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_MaestroLaberintoProducto_h_1397647699(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_MaestroLaberintoProducto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_MaestroLaberintoProducto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
