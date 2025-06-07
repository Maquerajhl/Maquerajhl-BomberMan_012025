// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/SCSpawnActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCSpawnActor() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_USCSpawnActor();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_USCSpawnActor_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class USCSpawnActor Function Spawn
struct Z_Construct_UFunction_USCSpawnActor_Spawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ejemplo" },
		{ "ModuleRelativePath", "SCSpawnActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USCSpawnActor_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCSpawnActor, nullptr, "Spawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USCSpawnActor_Spawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USCSpawnActor_Spawn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USCSpawnActor_Spawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USCSpawnActor_Spawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USCSpawnActor::execSpawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Spawn();
	P_NATIVE_END;
}
// End Class USCSpawnActor Function Spawn

// Begin Class USCSpawnActor
void USCSpawnActor::StaticRegisterNativesUSCSpawnActor()
{
	UClass* Class = USCSpawnActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Spawn", &USCSpawnActor::execSpawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USCSpawnActor);
UClass* Z_Construct_UClass_USCSpawnActor_NoRegister()
{
	return USCSpawnActor::StaticClass();
}
struct Z_Construct_UClass_USCSpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SCSpawnActor.h" },
		{ "ModuleRelativePath", "SCSpawnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "SCSpawnActor" },
		{ "ModuleRelativePath", "SCSpawnActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USCSpawnActor_Spawn, "Spawn" }, // 1524039306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USCSpawnActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USCSpawnActor_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USCSpawnActor, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToSpawn_MetaData), NewProp_ActorToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USCSpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCSpawnActor_Statics::NewProp_ActorToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USCSpawnActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USCSpawnActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USCSpawnActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USCSpawnActor_Statics::ClassParams = {
	&USCSpawnActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USCSpawnActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USCSpawnActor_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USCSpawnActor_Statics::Class_MetaDataParams), Z_Construct_UClass_USCSpawnActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USCSpawnActor()
{
	if (!Z_Registration_Info_UClass_USCSpawnActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USCSpawnActor.OuterSingleton, Z_Construct_UClass_USCSpawnActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USCSpawnActor.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<USCSpawnActor>()
{
	return USCSpawnActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USCSpawnActor);
USCSpawnActor::~USCSpawnActor() {}
// End Class USCSpawnActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_SCSpawnActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USCSpawnActor, USCSpawnActor::StaticClass, TEXT("USCSpawnActor"), &Z_Registration_Info_UClass_USCSpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USCSpawnActor), 1372348289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_SCSpawnActor_h_760208257(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_SCSpawnActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_SCSpawnActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
