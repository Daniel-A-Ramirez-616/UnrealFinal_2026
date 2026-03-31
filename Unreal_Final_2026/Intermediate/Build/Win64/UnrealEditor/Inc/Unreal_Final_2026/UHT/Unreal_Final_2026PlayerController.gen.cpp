// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Final_2026/Unreal_Final_2026PlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnreal_Final_2026PlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UNREAL_FINAL_2026_API UClass* Z_Construct_UClass_AUnreal_Final_2026PlayerController();
UNREAL_FINAL_2026_API UClass* Z_Construct_UClass_AUnreal_Final_2026PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_Final_2026();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUnreal_Final_2026PlayerController ***************************************
void AUnreal_Final_2026PlayerController::StaticRegisterNativesAUnreal_Final_2026PlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUnreal_Final_2026PlayerController;
UClass* AUnreal_Final_2026PlayerController::GetPrivateStaticClass()
{
	using TClass = AUnreal_Final_2026PlayerController;
	if (!Z_Registration_Info_UClass_AUnreal_Final_2026PlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Unreal_Final_2026PlayerController"),
			Z_Registration_Info_UClass_AUnreal_Final_2026PlayerController.InnerSingleton,
			StaticRegisterNativesAUnreal_Final_2026PlayerController,
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
	return Z_Registration_Info_UClass_AUnreal_Final_2026PlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AUnreal_Final_2026PlayerController_NoRegister()
{
	return AUnreal_Final_2026PlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Unreal_Final_2026PlayerController.h" },
		{ "ModuleRelativePath", "Unreal_Final_2026PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "Unreal_Final_2026PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_Final_2026PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnreal_Final_2026PlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Final_2026,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::ClassParams = {
	&AUnreal_Final_2026PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnreal_Final_2026PlayerController()
{
	if (!Z_Registration_Info_UClass_AUnreal_Final_2026PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnreal_Final_2026PlayerController.OuterSingleton, Z_Construct_UClass_AUnreal_Final_2026PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnreal_Final_2026PlayerController.OuterSingleton;
}
AUnreal_Final_2026PlayerController::AUnreal_Final_2026PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_Final_2026PlayerController);
AUnreal_Final_2026PlayerController::~AUnreal_Final_2026PlayerController() {}
// ********** End Class AUnreal_Final_2026PlayerController *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_Unreal_Final_2026PlayerController_h__Script_Unreal_Final_2026_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnreal_Final_2026PlayerController, AUnreal_Final_2026PlayerController::StaticClass, TEXT("AUnreal_Final_2026PlayerController"), &Z_Registration_Info_UClass_AUnreal_Final_2026PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnreal_Final_2026PlayerController), 3539654197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_Unreal_Final_2026PlayerController_h__Script_Unreal_Final_2026_3349584766(TEXT("/Script/Unreal_Final_2026"),
	Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_Unreal_Final_2026PlayerController_h__Script_Unreal_Final_2026_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_Unreal_Final_2026PlayerController_h__Script_Unreal_Final_2026_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
