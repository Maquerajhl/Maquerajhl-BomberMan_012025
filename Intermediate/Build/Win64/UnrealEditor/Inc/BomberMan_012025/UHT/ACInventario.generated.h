// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ACInventario.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInventoryActor;
#ifdef BOMBERMAN_012025_ACInventario_generated_h
#error "ACInventario.generated.h already included, missing '#pragma once' in ACInventario.h"
#endif
#define BOMBERMAN_012025_ACInventario_generated_h

#define FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


#define FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUACInventario(); \
	friend struct Z_Construct_UClass_UACInventario_Statics; \
public: \
	DECLARE_CLASS(UACInventario, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_012025"), NO_API) \
	DECLARE_SERIALIZER(UACInventario)


#define FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UACInventario(UACInventario&&); \
	UACInventario(const UACInventario&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UACInventario); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UACInventario); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UACInventario) \
	NO_API virtual ~UACInventario();


#define FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_12_PROLOG
#define FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class UACInventario>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ACInventario_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
