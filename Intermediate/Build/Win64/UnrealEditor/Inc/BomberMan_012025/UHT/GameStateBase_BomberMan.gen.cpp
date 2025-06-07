// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/GameStateBase_BomberMan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStateBase_BomberMan() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGameStateBase_BomberMan();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGameStateBase_BomberMan_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AGameStateBase_BomberMan Function GetScore
struct Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics
{
	struct GameStateBase_BomberMan_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter\n" },
#endif
		{ "ModuleRelativePath", "GameStateBase_BomberMan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameStateBase_BomberMan_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase_BomberMan, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::GameStateBase_BomberMan_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::GameStateBase_BomberMan_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateBase_BomberMan::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class AGameStateBase_BomberMan Function GetScore

// Begin Class AGameStateBase_BomberMan Function SetScore
struct Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics
{
	struct GameStateBase_BomberMan_eventSetScore_Parms
	{
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will set the CurrentScore variable\n" },
#endif
		{ "ModuleRelativePath", "GameStateBase_BomberMan.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will set the CurrentScore variable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameStateBase_BomberMan_eventSetScore_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase_BomberMan, nullptr, "SetScore", nullptr, nullptr, Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::GameStateBase_BomberMan_eventSetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::GameStateBase_BomberMan_eventSetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameStateBase_BomberMan::execSetScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScore(Z_Param_NewScore);
	P_NATIVE_END;
}
// End Class AGameStateBase_BomberMan Function SetScore

// Begin Class AGameStateBase_BomberMan
void AGameStateBase_BomberMan::StaticRegisterNativesAGameStateBase_BomberMan()
{
	UClass* Class = AGameStateBase_BomberMan::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScore", &AGameStateBase_BomberMan::execGetScore },
		{ "SetScore", &AGameStateBase_BomberMan::execSetScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameStateBase_BomberMan);
UClass* Z_Construct_UClass_AGameStateBase_BomberMan_NoRegister()
{
	return AGameStateBase_BomberMan::StaticClass();
}
struct Z_Construct_UClass_AGameStateBase_BomberMan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameStateBase_BomberMan.h" },
		{ "ModuleRelativePath", "GameStateBase_BomberMan.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[] = {
		{ "ModuleRelativePath", "GameStateBase_BomberMan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameStateBase_BomberMan_GetScore, "GetScore" }, // 3817021581
		{ &Z_Construct_UFunction_AGameStateBase_BomberMan_SetScore, "SetScore" }, // 2764854012
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameStateBase_BomberMan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameStateBase_BomberMan_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameStateBase_BomberMan, CurrentScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentScore_MetaData), NewProp_CurrentScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameStateBase_BomberMan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_BomberMan_Statics::NewProp_CurrentScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_BomberMan_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameStateBase_BomberMan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_BomberMan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameStateBase_BomberMan_Statics::ClassParams = {
	&AGameStateBase_BomberMan::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameStateBase_BomberMan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_BomberMan_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_BomberMan_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameStateBase_BomberMan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameStateBase_BomberMan()
{
	if (!Z_Registration_Info_UClass_AGameStateBase_BomberMan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameStateBase_BomberMan.OuterSingleton, Z_Construct_UClass_AGameStateBase_BomberMan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameStateBase_BomberMan.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AGameStateBase_BomberMan>()
{
	return AGameStateBase_BomberMan::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameStateBase_BomberMan);
AGameStateBase_BomberMan::~AGameStateBase_BomberMan() {}
// End Class AGameStateBase_BomberMan

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_GameStateBase_BomberMan_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameStateBase_BomberMan, AGameStateBase_BomberMan::StaticClass, TEXT("AGameStateBase_BomberMan"), &Z_Registration_Info_UClass_AGameStateBase_BomberMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameStateBase_BomberMan), 1919291755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_GameStateBase_BomberMan_h_1988896292(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_GameStateBase_BomberMan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_GameStateBase_BomberMan_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
