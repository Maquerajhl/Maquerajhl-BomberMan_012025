// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BomberMan_012025Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025Character() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025Character();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025Character_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UACInventario_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UPowerUpCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABomberMan_012025Character Function DropItem
struct Z_Construct_UFunction_ABomberMan_012025Character_DropItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// <-- Agregado\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<-- Agregado" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "DropItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_DropItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execDropItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItem();
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function DropItem

// Begin Class ABomberMan_012025Character Function GetExplosionRange
struct Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics
{
	struct BomberMan_012025Character_eventGetExplosionRange_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025Character_eventGetExplosionRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "GetExplosionRange", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::BomberMan_012025Character_eventGetExplosionRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::BomberMan_012025Character_eventGetExplosionRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execGetExplosionRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetExplosionRange();
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function GetExplosionRange

// Begin Class ABomberMan_012025Character Function GetMaxBombs
struct Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics
{
	struct BomberMan_012025Character_eventGetMaxBombs_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025Character_eventGetMaxBombs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "GetMaxBombs", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::BomberMan_012025Character_eventGetMaxBombs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::BomberMan_012025Character_eventGetMaxBombs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execGetMaxBombs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxBombs();
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function GetMaxBombs

// Begin Class ABomberMan_012025Character Function MoveForward
struct Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics
{
	struct BomberMan_012025Character_eventMoveForward_Parms
	{
		float AxisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION()\n//virtual void NotifyHit(class UPrimitiveComponent* MyComp,\n//\x09""AActor* Other, class UPrimitiveComponent* OtherComp,\n//\x09""bool bSelfMoved, FVector HitLocation, FVector\n//\x09HitNormal, FVector NormalImpulse, const FHitResult&\n//\x09Hit) override;\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION()\nvirtual void NotifyHit(class UPrimitiveComponent* MyComp,\n       AActor* Other, class UPrimitiveComponent* OtherComp,\n       bool bSelfMoved, FVector HitLocation, FVector\n       HitNormal, FVector NormalImpulse, const FHitResult&\n       Hit) override;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025Character_eventMoveForward_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::BomberMan_012025Character_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::BomberMan_012025Character_eventMoveForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_MoveForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_MoveForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execMoveForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveForward(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function MoveForward

// Begin Class ABomberMan_012025Character Function SetExplosionRange
struct Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics
{
	struct BomberMan_012025Character_eventSetExplosionRange_Parms
	{
		int32 NewExplosionRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewExplosionRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::NewProp_NewExplosionRange = { "NewExplosionRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025Character_eventSetExplosionRange_Parms, NewExplosionRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::NewProp_NewExplosionRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "SetExplosionRange", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::BomberMan_012025Character_eventSetExplosionRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::BomberMan_012025Character_eventSetExplosionRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execSetExplosionRange)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewExplosionRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExplosionRange(Z_Param_NewExplosionRange);
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function SetExplosionRange

// Begin Class ABomberMan_012025Character Function SetMaxBombs
struct Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics
{
	struct BomberMan_012025Character_eventSetMaxBombs_Parms
	{
		int32 NewMaxBombs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMaxBombs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::NewProp_NewMaxBombs = { "NewMaxBombs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025Character_eventSetMaxBombs_Parms, NewMaxBombs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::NewProp_NewMaxBombs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "SetMaxBombs", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::BomberMan_012025Character_eventSetMaxBombs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::BomberMan_012025Character_eventSetMaxBombs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execSetMaxBombs)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewMaxBombs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxBombs(Z_Param_NewMaxBombs);
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function SetMaxBombs

// Begin Class ABomberMan_012025Character Function SimulateEnemyKilled
struct Z_Construct_UFunction_ABomberMan_012025Character_SimulateEnemyKilled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_SimulateEnemyKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "SimulateEnemyKilled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_SimulateEnemyKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_SimulateEnemyKilled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_SimulateEnemyKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_SimulateEnemyKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execSimulateEnemyKilled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SimulateEnemyKilled();
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function SimulateEnemyKilled

// Begin Class ABomberMan_012025Character Function SimulatePlayerDeath
struct Z_Construct_UFunction_ABomberMan_012025Character_SimulatePlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_SimulatePlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "SimulatePlayerDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_SimulatePlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_SimulatePlayerDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_SimulatePlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_SimulatePlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execSimulatePlayerDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SimulatePlayerDeath();
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function SimulatePlayerDeath

// Begin Class ABomberMan_012025Character Function TakeItem
struct Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics
{
	struct BomberMan_012025Character_eventTakeItem_Parms
	{
		AInventoryActor* InventoryItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025Character_eventTakeItem_Parms, InventoryItem), Z_Construct_UClass_AInventoryActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::NewProp_InventoryItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "TakeItem", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::BomberMan_012025Character_eventTakeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::BomberMan_012025Character_eventTakeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025Character_TakeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_TakeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025Character::execTakeItem)
{
	P_GET_OBJECT(AInventoryActor,Z_Param_InventoryItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeItem(Z_Param_InventoryItem);
	P_NATIVE_END;
}
// End Class ABomberMan_012025Character Function TakeItem

// Begin Class ABomberMan_012025Character
void ABomberMan_012025Character::StaticRegisterNativesABomberMan_012025Character()
{
	UClass* Class = ABomberMan_012025Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropItem", &ABomberMan_012025Character::execDropItem },
		{ "GetExplosionRange", &ABomberMan_012025Character::execGetExplosionRange },
		{ "GetMaxBombs", &ABomberMan_012025Character::execGetMaxBombs },
		{ "MoveForward", &ABomberMan_012025Character::execMoveForward },
		{ "SetExplosionRange", &ABomberMan_012025Character::execSetExplosionRange },
		{ "SetMaxBombs", &ABomberMan_012025Character::execSetMaxBombs },
		{ "SimulateEnemyKilled", &ABomberMan_012025Character::execSimulateEnemyKilled },
		{ "SimulatePlayerDeath", &ABomberMan_012025Character::execSimulatePlayerDeath },
		{ "TakeItem", &ABomberMan_012025Character::execTakeItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_012025Character);
UClass* Z_Construct_UClass_ABomberMan_012025Character_NoRegister()
{
	return ABomberMan_012025Character::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_012025Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BomberMan_012025Character.h" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowerUpCollection_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PowerUpCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberMan_012025Character_DropItem, "DropItem" }, // 1820579948
		{ &Z_Construct_UFunction_ABomberMan_012025Character_GetExplosionRange, "GetExplosionRange" }, // 3474156074
		{ &Z_Construct_UFunction_ABomberMan_012025Character_GetMaxBombs, "GetMaxBombs" }, // 2656266326
		{ &Z_Construct_UFunction_ABomberMan_012025Character_MoveForward, "MoveForward" }, // 2107662435
		{ &Z_Construct_UFunction_ABomberMan_012025Character_SetExplosionRange, "SetExplosionRange" }, // 3917221082
		{ &Z_Construct_UFunction_ABomberMan_012025Character_SetMaxBombs, "SetMaxBombs" }, // 2863119019
		{ &Z_Construct_UFunction_ABomberMan_012025Character_SimulateEnemyKilled, "SimulateEnemyKilled" }, // 2035281196
		{ &Z_Construct_UFunction_ABomberMan_012025Character_SimulatePlayerDeath, "SimulatePlayerDeath" }, // 2837916451
		{ &Z_Construct_UFunction_ABomberMan_012025Character_TakeItem, "TakeItem" }, // 3814464523
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_MyInventory = { "MyInventory", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, MyInventory), Z_Construct_UClass_UACInventario_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyInventory_MetaData), NewProp_MyInventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_PowerUpCollection = { "PowerUpCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025Character, PowerUpCollection), Z_Construct_UClass_UPowerUpCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowerUpCollection_MetaData), NewProp_PowerUpCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_MyInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_PowerUpCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan_012025Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_012025Character_Statics::ClassParams = {
	&ABomberMan_012025Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_012025Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_012025Character()
{
	if (!Z_Registration_Info_UClass_ABomberMan_012025Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_012025Character.OuterSingleton, Z_Construct_UClass_ABomberMan_012025Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_012025Character.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberMan_012025Character>()
{
	return ABomberMan_012025Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_012025Character);
ABomberMan_012025Character::~ABomberMan_012025Character() {}
// End Class ABomberMan_012025Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_012025Character, ABomberMan_012025Character::StaticClass, TEXT("ABomberMan_012025Character"), &Z_Registration_Info_UClass_ABomberMan_012025Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025Character), 2047664141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025Character_h_1548267968(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
