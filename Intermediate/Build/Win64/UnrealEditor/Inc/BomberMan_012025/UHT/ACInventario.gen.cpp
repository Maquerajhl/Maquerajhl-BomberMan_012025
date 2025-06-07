// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ACInventario.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACInventario() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UACInventario();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UACInventario_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UACInventario Function AddToInventory
struct Z_Construct_UFunction_UACInventario_AddToInventory_Statics
{
	struct ACInventario_eventAddToInventory_Parms
	{
		AInventoryActor* ActorToAdd;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ACInventario.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToAdd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACInventario_AddToInventory_Statics::NewProp_ActorToAdd = { "ActorToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACInventario_eventAddToInventory_Parms, ActorToAdd), Z_Construct_UClass_AInventoryActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UACInventario_AddToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACInventario_eventAddToInventory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACInventario_AddToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACInventario_AddToInventory_Statics::NewProp_ActorToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACInventario_AddToInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACInventario_AddToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACInventario_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACInventario, nullptr, "AddToInventory", nullptr, nullptr, Z_Construct_UFunction_UACInventario_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACInventario_AddToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACInventario_AddToInventory_Statics::ACInventario_eventAddToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACInventario_AddToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACInventario_AddToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UACInventario_AddToInventory_Statics::ACInventario_eventAddToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UACInventario_AddToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACInventario_AddToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UACInventario::execAddToInventory)
{
	P_GET_OBJECT(AInventoryActor,Z_Param_ActorToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddToInventory(Z_Param_ActorToAdd);
	P_NATIVE_END;
}
// End Class UACInventario Function AddToInventory

// Begin Class UACInventario Function RemoveFromInventory
struct Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics
{
	struct ACInventario_eventRemoveFromInventory_Parms
	{
		AInventoryActor* ActorToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ACInventario.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::NewProp_ActorToRemove = { "ActorToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACInventario_eventRemoveFromInventory_Parms, ActorToRemove), Z_Construct_UClass_AInventoryActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::NewProp_ActorToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UACInventario, nullptr, "RemoveFromInventory", nullptr, nullptr, Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::ACInventario_eventRemoveFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::ACInventario_eventRemoveFromInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UACInventario_RemoveFromInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UACInventario_RemoveFromInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UACInventario::execRemoveFromInventory)
{
	P_GET_OBJECT(AInventoryActor,Z_Param_ActorToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFromInventory(Z_Param_ActorToRemove);
	P_NATIVE_END;
}
// End Class UACInventario Function RemoveFromInventory

// Begin Class UACInventario
void UACInventario::StaticRegisterNativesUACInventario()
{
	UClass* Class = UACInventario::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToInventory", &UACInventario::execAddToInventory },
		{ "RemoveFromInventory", &UACInventario::execRemoveFromInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACInventario);
UClass* Z_Construct_UClass_UACInventario_NoRegister()
{
	return UACInventario::StaticClass();
}
struct Z_Construct_UClass_UACInventario_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward declaration of AObjetoInventario\n" },
#endif
		{ "IncludePath", "ACInventario.h" },
		{ "ModuleRelativePath", "ACInventario.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declaration of AObjetoInventario" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInventory_MetaData[] = {
		{ "ModuleRelativePath", "ACInventario.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UACInventario_AddToInventory, "AddToInventory" }, // 1731854743
		{ &Z_Construct_UFunction_UACInventario_RemoveFromInventory, "RemoveFromInventory" }, // 2597928194
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACInventario>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UACInventario_Statics::NewProp_CurrentInventory_Inner = { "CurrentInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AInventoryActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UACInventario_Statics::NewProp_CurrentInventory = { "CurrentInventory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UACInventario, CurrentInventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInventory_MetaData), NewProp_CurrentInventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UACInventario_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACInventario_Statics::NewProp_CurrentInventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UACInventario_Statics::NewProp_CurrentInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACInventario_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UACInventario_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACInventario_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UACInventario_Statics::ClassParams = {
	&UACInventario::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UACInventario_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UACInventario_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACInventario_Statics::Class_MetaDataParams), Z_Construct_UClass_UACInventario_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UACInventario()
{
	if (!Z_Registration_Info_UClass_UACInventario.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACInventario.OuterSingleton, Z_Construct_UClass_UACInventario_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UACInventario.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UACInventario>()
{
	return UACInventario::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UACInventario);
UACInventario::~UACInventario() {}
// End Class UACInventario

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UACInventario, UACInventario::StaticClass, TEXT("UACInventario"), &Z_Registration_Info_UClass_UACInventario, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACInventario), 1000972920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_1402209787(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
