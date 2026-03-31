// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Final_2026/Unreal_Final_2026GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnreal_Final_2026GameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREAL_FINAL_2026_API UClass* Z_Construct_UClass_AUnreal_Final_2026GameMode();
UNREAL_FINAL_2026_API UClass* Z_Construct_UClass_AUnreal_Final_2026GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_Final_2026();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUnreal_Final_2026GameMode ***********************************************
void AUnreal_Final_2026GameMode::StaticRegisterNativesAUnreal_Final_2026GameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUnreal_Final_2026GameMode;
UClass* AUnreal_Final_2026GameMode::GetPrivateStaticClass()
{
	using TClass = AUnreal_Final_2026GameMode;
	if (!Z_Registration_Info_UClass_AUnreal_Final_2026GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Unreal_Final_2026GameMode"),
			Z_Registration_Info_UClass_AUnreal_Final_2026GameMode.InnerSingleton,
			StaticRegisterNativesAUnreal_Final_2026GameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AUnreal_Final_2026GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AUnreal_Final_2026GameMode_NoRegister()
{
	return AUnreal_Final_2026GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUnreal_Final_2026GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Unreal_Final_2026GameMode.h" },
		{ "ModuleRelativePath", "Unreal_Final_2026GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_Final_2026GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUnreal_Final_2026GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Final_2026,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_Final_2026GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_Final_2026GameMode_Statics::ClassParams = {
	&AUnreal_Final_2026GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_Final_2026GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnreal_Final_2026GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnreal_Final_2026GameMode()
{
	if (!Z_Registration_Info_UClass_AUnreal_Final_2026GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnreal_Final_2026GameMode.OuterSingleton, Z_Construct_UClass_AUnreal_Final_2026GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnreal_Final_2026GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_Final_2026GameMode);
AUnreal_Final_2026GameMode::~AUnreal_Final_2026GameMode() {}
// ********** End Class AUnreal_Final_2026GameMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_Unreal_Final_2026GameMode_h__Script_Unreal_Final_2026_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnreal_Final_2026GameMode, AUnreal_Final_2026GameMode::StaticClass, TEXT("AUnreal_Final_2026GameMode"), &Z_Registration_Info_UClass_AUnreal_Final_2026GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnreal_Final_2026GameMode), 1823479756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_Unreal_Final_2026GameMode_h__Script_Unreal_Final_2026_1629723512(TEXT("/Script/Unreal_Final_2026"),
	Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_Unreal_Final_2026GameMode_h__Script_Unreal_Final_2026_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_Unreal_Final_2026GameMode_h__Script_Unreal_Final_2026_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
