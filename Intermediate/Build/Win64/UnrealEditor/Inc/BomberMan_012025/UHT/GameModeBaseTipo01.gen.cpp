// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/GameModeBaseTipo01.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeBaseTipo01() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAnimalAcuatico_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGameModeBaseTipo01();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGameModeBaseTipo01_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AGameModeBaseTipo01 Function DestroyActorFunction
struct Z_Construct_UFunction_AGameModeBaseTipo01_DestroyActorFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModeBaseTipo01.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBaseTipo01_DestroyActorFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBaseTipo01, nullptr, "DestroyActorFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBaseTipo01_DestroyActorFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameModeBaseTipo01_DestroyActorFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameModeBaseTipo01_DestroyActorFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBaseTipo01_DestroyActorFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameModeBaseTipo01::execDestroyActorFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyActorFunction();
	P_NATIVE_END;
}
// End Class AGameModeBaseTipo01 Function DestroyActorFunction

// Begin Class AGameModeBaseTipo01
void AGameModeBaseTipo01::StaticRegisterNativesAGameModeBaseTipo01()
{
	UClass* Class = AGameModeBaseTipo01::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyActorFunction", &AGameModeBaseTipo01::execDestroyActorFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameModeBaseTipo01);
UClass* Z_Construct_UClass_AGameModeBaseTipo01_NoRegister()
{
	return AGameModeBaseTipo01::StaticClass();
}
struct Z_Construct_UClass_AGameModeBaseTipo01_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModeBaseTipo01.h" },
		{ "ModuleRelativePath", "GameModeBaseTipo01.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "GameModeBaseTipo01.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameModeBaseTipo01_DestroyActorFunction, "DestroyActorFunction" }, // 693010196
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeBaseTipo01>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameModeBaseTipo01_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameModeBaseTipo01, SpawnedActor), Z_Construct_UClass_AEnemigoAnimalAcuatico_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActor_MetaData), NewProp_SpawnedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameModeBaseTipo01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBaseTipo01_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBaseTipo01_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameModeBaseTipo01_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBaseTipo01_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameModeBaseTipo01_Statics::ClassParams = {
	&AGameModeBaseTipo01::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameModeBaseTipo01_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBaseTipo01_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBaseTipo01_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameModeBaseTipo01_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameModeBaseTipo01()
{
	if (!Z_Registration_Info_UClass_AGameModeBaseTipo01.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameModeBaseTipo01.OuterSingleton, Z_Construct_UClass_AGameModeBaseTipo01_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameModeBaseTipo01.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AGameModeBaseTipo01>()
{
	return AGameModeBaseTipo01::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeBaseTipo01);
AGameModeBaseTipo01::~AGameModeBaseTipo01() {}
// End Class AGameModeBaseTipo01

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_GameModeBaseTipo01_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameModeBaseTipo01, AGameModeBaseTipo01::StaticClass, TEXT("AGameModeBaseTipo01"), &Z_Registration_Info_UClass_AGameModeBaseTipo01, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameModeBaseTipo01), 4157619238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_GameModeBaseTipo01_h_135514031(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_GameModeBaseTipo01_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_GameModeBaseTipo01_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
