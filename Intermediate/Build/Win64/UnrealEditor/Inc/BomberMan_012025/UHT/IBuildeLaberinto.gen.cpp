// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/IBuildeLaberinto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBuildeLaberinto() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIBuildeLaberinto();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIBuildeLaberinto_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Interface UIBuildeLaberinto
void UIBuildeLaberinto::StaticRegisterNativesUIBuildeLaberinto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIBuildeLaberinto);
UClass* Z_Construct_UClass_UIBuildeLaberinto_NoRegister()
{
	return UIBuildeLaberinto::StaticClass();
}
struct Z_Construct_UClass_UIBuildeLaberinto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IBuildeLaberinto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBuildeLaberinto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIBuildeLaberinto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIBuildeLaberinto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIBuildeLaberinto_Statics::ClassParams = {
	&UIBuildeLaberinto::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIBuildeLaberinto_Statics::Class_MetaDataParams), Z_Construct_UClass_UIBuildeLaberinto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIBuildeLaberinto()
{
	if (!Z_Registration_Info_UClass_UIBuildeLaberinto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIBuildeLaberinto.OuterSingleton, Z_Construct_UClass_UIBuildeLaberinto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIBuildeLaberinto.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UIBuildeLaberinto>()
{
	return UIBuildeLaberinto::StaticClass();
}
UIBuildeLaberinto::UIBuildeLaberinto(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIBuildeLaberinto);
UIBuildeLaberinto::~UIBuildeLaberinto() {}
// End Interface UIBuildeLaberinto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_IBuildeLaberinto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIBuildeLaberinto, UIBuildeLaberinto::StaticClass, TEXT("UIBuildeLaberinto"), &Z_Registration_Info_UClass_UIBuildeLaberinto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIBuildeLaberinto), 1337323980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_IBuildeLaberinto_h_1859911074(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_IBuildeLaberinto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MSIcito_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_IBuildeLaberinto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
