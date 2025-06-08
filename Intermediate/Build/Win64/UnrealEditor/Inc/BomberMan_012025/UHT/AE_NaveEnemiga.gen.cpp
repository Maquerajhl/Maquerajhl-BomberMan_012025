// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/AE_NaveEnemiga.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAE_NaveEnemiga() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AAE_NaveEnemiga();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AAE_NaveEnemiga_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIEnemigoPrototype_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AAE_NaveEnemiga Function CambiarDireccionAleatoria
struct Z_Construct_UFunction_AAE_NaveEnemiga_CambiarDireccionAleatoria_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nave|Movimiento|PatrullaAutonoma" },
		{ "ModuleRelativePath", "AE_NaveEnemiga.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAE_NaveEnemiga_CambiarDireccionAleatoria_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAE_NaveEnemiga, nullptr, "CambiarDireccionAleatoria", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAE_NaveEnemiga_CambiarDireccionAleatoria_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAE_NaveEnemiga_CambiarDireccionAleatoria_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAE_NaveEnemiga_CambiarDireccionAleatoria()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAE_NaveEnemiga_CambiarDireccionAleatoria_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAE_NaveEnemiga::execCambiarDireccionAleatoria)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CambiarDireccionAleatoria();
	P_NATIVE_END;
}
// End Class AAE_NaveEnemiga Function CambiarDireccionAleatoria

// Begin Class AAE_NaveEnemiga Function ClonarActor
struct AE_NaveEnemiga_eventClonarActor_Parms
{
	UWorld* World;
	FVector Location;
	FRotator Rotation;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	AE_NaveEnemiga_eventClonarActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_AAE_NaveEnemiga_ClonarActor = FName(TEXT("ClonarActor"));
AActor* AAE_NaveEnemiga::ClonarActor(UWorld* World, FVector const& Location, FRotator const& Rotation)
{
	UFunction* Func = FindFunctionChecked(NAME_AAE_NaveEnemiga_ClonarActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AE_NaveEnemiga_eventClonarActor_Parms Parms;
		Parms.World=World;
		Parms.Location=Location;
		Parms.Rotation=Rotation;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return ClonarActor_Implementation(World, Location, Rotation);
	}
}
struct Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Prototype" },
		{ "ModuleRelativePath", "AE_NaveEnemiga.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AE_NaveEnemiga_eventClonarActor_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AE_NaveEnemiga_eventClonarActor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AE_NaveEnemiga_eventClonarActor_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AE_NaveEnemiga_eventClonarActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAE_NaveEnemiga, nullptr, "ClonarActor", nullptr, nullptr, Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::PropPointers), sizeof(AE_NaveEnemiga_eventClonarActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(AE_NaveEnemiga_eventClonarActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAE_NaveEnemiga::execClonarActor)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->ClonarActor_Implementation(Z_Param_World,Z_Param_Out_Location,Z_Param_Out_Rotation);
	P_NATIVE_END;
}
// End Class AAE_NaveEnemiga Function ClonarActor

// Begin Class AAE_NaveEnemiga Function Mover
struct Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics
{
	struct AE_NaveEnemiga_eventMover_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nave" },
		{ "ModuleRelativePath", "AE_NaveEnemiga.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AE_NaveEnemiga_eventMover_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAE_NaveEnemiga, nullptr, "Mover", nullptr, nullptr, Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::AE_NaveEnemiga_eventMover_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::AE_NaveEnemiga_eventMover_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAE_NaveEnemiga_Mover()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAE_NaveEnemiga_Mover_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAE_NaveEnemiga::execMover)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Mover(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AAE_NaveEnemiga Function Mover

// Begin Class AAE_NaveEnemiga
void AAE_NaveEnemiga::StaticRegisterNativesAAE_NaveEnemiga()
{
	UClass* Class = AAE_NaveEnemiga::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CambiarDireccionAleatoria", &AAE_NaveEnemiga::execCambiarDireccionAleatoria },
		{ "ClonarActor", &AAE_NaveEnemiga::execClonarActor },
		{ "Mover", &AAE_NaveEnemiga::execMover },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAE_NaveEnemiga);
UClass* Z_Construct_UClass_AAE_NaveEnemiga_NoRegister()
{
	return AAE_NaveEnemiga::StaticClass();
}
struct Z_Construct_UClass_AAE_NaveEnemiga_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AE_NaveEnemiga.h" },
		{ "ModuleRelativePath", "AE_NaveEnemiga.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaveMesh_MetaData[] = {
		{ "Category", "Nave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AE_NaveEnemiga.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocidadMovimiento_MetaData[] = {
		{ "Category", "Nave|Movimiento" },
		{ "ModuleRelativePath", "AE_NaveEnemiga.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DireccionActualPatrulla_MetaData[] = {
		{ "Category", "Nave|Movimiento|PatrullaAutonoma" },
		{ "ModuleRelativePath", "AE_NaveEnemiga.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoCambioDireccionMin_MetaData[] = {
		{ "Category", "Nave|Movimiento|PatrullaAutonoma" },
		{ "ModuleRelativePath", "AE_NaveEnemiga.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoCambioDireccionMax_MetaData[] = {
		{ "Category", "Nave|Movimiento|PatrullaAutonoma" },
		{ "ModuleRelativePath", "AE_NaveEnemiga.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NaveMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocidadMovimiento;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DireccionActualPatrulla;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoCambioDireccionMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoCambioDireccionMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAE_NaveEnemiga_CambiarDireccionAleatoria, "CambiarDireccionAleatoria" }, // 4153920311
		{ &Z_Construct_UFunction_AAE_NaveEnemiga_ClonarActor, "ClonarActor" }, // 3665305614
		{ &Z_Construct_UFunction_AAE_NaveEnemiga_Mover, "Mover" }, // 1749168468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAE_NaveEnemiga>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_NaveMesh = { "NaveMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAE_NaveEnemiga, NaveMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaveMesh_MetaData), NewProp_NaveMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAE_NaveEnemiga, VelocidadMovimiento), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocidadMovimiento_MetaData), NewProp_VelocidadMovimiento_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_DireccionActualPatrulla = { "DireccionActualPatrulla", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAE_NaveEnemiga, DireccionActualPatrulla), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DireccionActualPatrulla_MetaData), NewProp_DireccionActualPatrulla_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_TiempoCambioDireccionMin = { "TiempoCambioDireccionMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAE_NaveEnemiga, TiempoCambioDireccionMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoCambioDireccionMin_MetaData), NewProp_TiempoCambioDireccionMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_TiempoCambioDireccionMax = { "TiempoCambioDireccionMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAE_NaveEnemiga, TiempoCambioDireccionMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoCambioDireccionMax_MetaData), NewProp_TiempoCambioDireccionMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAE_NaveEnemiga_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_NaveMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_VelocidadMovimiento,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_DireccionActualPatrulla,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_TiempoCambioDireccionMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAE_NaveEnemiga_Statics::NewProp_TiempoCambioDireccionMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAE_NaveEnemiga_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAE_NaveEnemiga_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAE_NaveEnemiga_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAE_NaveEnemiga_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIEnemigoPrototype_NoRegister, (int32)VTABLE_OFFSET(AAE_NaveEnemiga, IIEnemigoPrototype), false },  // 3969293081
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAE_NaveEnemiga_Statics::ClassParams = {
	&AAE_NaveEnemiga::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAE_NaveEnemiga_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAE_NaveEnemiga_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAE_NaveEnemiga_Statics::Class_MetaDataParams), Z_Construct_UClass_AAE_NaveEnemiga_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAE_NaveEnemiga()
{
	if (!Z_Registration_Info_UClass_AAE_NaveEnemiga.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAE_NaveEnemiga.OuterSingleton, Z_Construct_UClass_AAE_NaveEnemiga_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAE_NaveEnemiga.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AAE_NaveEnemiga>()
{
	return AAE_NaveEnemiga::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAE_NaveEnemiga);
AAE_NaveEnemiga::~AAE_NaveEnemiga() {}
// End Class AAE_NaveEnemiga

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_AE_NaveEnemiga_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAE_NaveEnemiga, AAE_NaveEnemiga::StaticClass, TEXT("AAE_NaveEnemiga"), &Z_Registration_Info_UClass_AAE_NaveEnemiga, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAE_NaveEnemiga), 1320380979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_AE_NaveEnemiga_h_2883697835(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_AE_NaveEnemiga_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_AE_NaveEnemiga_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
