// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstructorLaberintoBuilder.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_012025_ConstructorLaberintoBuilder_generated_h
#error "ConstructorLaberintoBuilder.generated.h already included, missing '#pragma once' in ConstructorLaberintoBuilder.h"
#endif
#define BOMBERMAN_012025_ConstructorLaberintoBuilder_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ConstructorLaberintoBuilder_h


#define FOREACH_ENUM_ECODIGOBLOQUE(op) \
	op(ECodigoBloque::NINGUNO) \
	op(ECodigoBloque::GENERICO) \
	op(ECodigoBloque::ACERO) \
	op(ECodigoBloque::BURBUJA) \
	op(ECodigoBloque::CONCRETO) \
	op(ECodigoBloque::LADRILLO) \
	op(ECodigoBloque::MADERA) 

enum class ECodigoBloque : uint8;
template<> struct TIsUEnumClass<ECodigoBloque> { enum { Value = true }; };
template<> BOMBERMAN_012025_API UEnum* StaticEnum<ECodigoBloque>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
