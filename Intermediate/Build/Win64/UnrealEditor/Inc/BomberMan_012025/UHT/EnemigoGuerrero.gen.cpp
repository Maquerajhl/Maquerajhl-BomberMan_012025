// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/EnemigoGuerrero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoGuerrero() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoGuerrero();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoGuerrero_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoGuerrero Function ToString
struct Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics
{
	struct EnemigoGuerrero_eventToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns message containing the Name property\n" },
#endif
		{ "ModuleRelativePath", "EnemigoGuerrero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns message containing the Name property" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemigoGuerrero_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemigoGuerrero, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::EnemigoGuerrero_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::EnemigoGuerrero_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemigoGuerrero_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemigoGuerrero_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemigoGuerrero::execToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToString();
	P_NATIVE_END;
}
// End Class AEnemigoGuerrero Function ToString

// Begin Class AEnemigoGuerrero
void AEnemigoGuerrero::StaticRegisterNativesAEnemigoGuerrero()
{
	UClass* Class = AEnemigoGuerrero::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToString", &AEnemigoGuerrero::execToString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoGuerrero);
UClass* Z_Construct_UClass_AEnemigoGuerrero_NoRegister()
{
	return AEnemigoGuerrero::StaticClass();
}
struct Z_Construct_UClass_AEnemigoGuerrero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoGuerrero.h" },
		{ "ModuleRelativePath", "EnemigoGuerrero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nombre_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the Actor\n" },
#endif
		{ "ModuleRelativePath", "EnemigoGuerrero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Nombre;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemigoGuerrero_ToString, "ToString" }, // 1385959692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoGuerrero>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEnemigoGuerrero_Statics::NewProp_Nombre = { "Nombre", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoGuerrero, Nombre), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nombre_MetaData), NewProp_Nombre_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoGuerrero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoGuerrero_Statics::NewProp_Nombre,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoGuerrero_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigoGuerrero_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoGuerrero_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoGuerrero_Statics::ClassParams = {
	&AEnemigoGuerrero::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemigoGuerrero_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoGuerrero_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoGuerrero_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoGuerrero_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoGuerrero()
{
	if (!Z_Registration_Info_UClass_AEnemigoGuerrero.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoGuerrero.OuterSingleton, Z_Construct_UClass_AEnemigoGuerrero_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoGuerrero.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoGuerrero>()
{
	return AEnemigoGuerrero::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoGuerrero);
AEnemigoGuerrero::~AEnemigoGuerrero() {}
// End Class AEnemigoGuerrero

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoGuerrero_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoGuerrero, AEnemigoGuerrero::StaticClass, TEXT("AEnemigoGuerrero"), &Z_Registration_Info_UClass_AEnemigoGuerrero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoGuerrero), 3938787806U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoGuerrero_h_1138214186(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoGuerrero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoGuerrero_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
