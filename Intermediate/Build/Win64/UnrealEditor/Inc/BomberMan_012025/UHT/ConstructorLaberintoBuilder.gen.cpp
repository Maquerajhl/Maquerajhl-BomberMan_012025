// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ConstructorLaberintoBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorLaberintoBuilder() {}

// Begin Cross Module References
BOMBERMAN_012025_API UEnum* Z_Construct_UEnum_BomberMan_012025_ECodigoBloque();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Enum ECodigoBloque
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECodigoBloque;
static UEnum* ECodigoBloque_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECodigoBloque.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECodigoBloque.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BomberMan_012025_ECodigoBloque, (UObject*)Z_Construct_UPackage__Script_BomberMan_012025(), TEXT("ECodigoBloque"));
	}
	return Z_Registration_Info_UEnum_ECodigoBloque.OuterSingleton;
}
template<> BOMBERMAN_012025_API UEnum* StaticEnum<ECodigoBloque>()
{
	return ECodigoBloque_StaticEnum();
}
struct Z_Construct_UEnum_BomberMan_012025_ECodigoBloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACERO.DisplayName", "BloqueAcero" },
		{ "ACERO.Name", "ECodigoBloque::ACERO" },
		{ "BlueprintType", "true" },
		{ "BURBUJA.DisplayName", "BloqueBurbuja" },
		{ "BURBUJA.Name", "ECodigoBloque::BURBUJA" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum para mapear los c\xef\xbf\xbd""digos de plantilla a los tipos de bloques\n" },
#endif
		{ "CONCRETO.DisplayName", "BloqueConcreto" },
		{ "CONCRETO.Name", "ECodigoBloque::CONCRETO" },
		{ "GENERICO.DisplayName", "Bloque" },
		{ "GENERICO.Name", "ECodigoBloque::GENERICO" },
		{ "LADRILLO.DisplayName", "BloqueLadrillo" },
		{ "LADRILLO.Name", "ECodigoBloque::LADRILLO" },
		{ "MADERA.DisplayName", "BloqueMadera" },
		{ "MADERA.Name", "ECodigoBloque::MADERA" },
		{ "ModuleRelativePath", "ConstructorLaberintoBuilder.h" },
		{ "NINGUNO.DisplayName", "Sin Bloque" },
		{ "NINGUNO.Name", "ECodigoBloque::NINGUNO" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum para mapear los c\xef\xbf\xbd""digos de plantilla a los tipos de bloques" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECodigoBloque::NINGUNO", (int64)ECodigoBloque::NINGUNO },
		{ "ECodigoBloque::GENERICO", (int64)ECodigoBloque::GENERICO },
		{ "ECodigoBloque::ACERO", (int64)ECodigoBloque::ACERO },
		{ "ECodigoBloque::BURBUJA", (int64)ECodigoBloque::BURBUJA },
		{ "ECodigoBloque::CONCRETO", (int64)ECodigoBloque::CONCRETO },
		{ "ECodigoBloque::LADRILLO", (int64)ECodigoBloque::LADRILLO },
		{ "ECodigoBloque::MADERA", (int64)ECodigoBloque::MADERA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BomberMan_012025_ECodigoBloque_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BomberMan_012025,
	nullptr,
	"ECodigoBloque",
	"ECodigoBloque",
	Z_Construct_UEnum_BomberMan_012025_ECodigoBloque_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BomberMan_012025_ECodigoBloque_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BomberMan_012025_ECodigoBloque_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BomberMan_012025_ECodigoBloque_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BomberMan_012025_ECodigoBloque()
{
	if (!Z_Registration_Info_UEnum_ECodigoBloque.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECodigoBloque.InnerSingleton, Z_Construct_UEnum_BomberMan_012025_ECodigoBloque_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECodigoBloque.InnerSingleton;
}
// End Enum ECodigoBloque

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ConstructorLaberintoBuilder_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECodigoBloque_StaticEnum, TEXT("ECodigoBloque"), &Z_Registration_Info_UEnum_ECodigoBloque, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3533976027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ConstructorLaberintoBuilder_h_1222669898(TEXT("/Script/BomberMan_012025"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ConstructorLaberintoBuilder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_ConstructorLaberintoBuilder_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
