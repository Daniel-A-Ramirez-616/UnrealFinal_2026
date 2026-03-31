// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Final_2026/CPP_InteractablePawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_InteractablePawn() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UNREAL_FINAL_2026_API UClass* Z_Construct_UClass_ACPP_InteractablePawn();
UNREAL_FINAL_2026_API UClass* Z_Construct_UClass_ACPP_InteractablePawn_NoRegister();
UNREAL_FINAL_2026_API UClass* Z_Construct_UClass_AUnreal_Final_2026Character();
UPackage* Z_Construct_UPackage__Script_Unreal_Final_2026();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_InteractablePawn ****************************************************
void ACPP_InteractablePawn::StaticRegisterNativesACPP_InteractablePawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_InteractablePawn;
UClass* ACPP_InteractablePawn::GetPrivateStaticClass()
{
	using TClass = ACPP_InteractablePawn;
	if (!Z_Registration_Info_UClass_ACPP_InteractablePawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_InteractablePawn"),
			Z_Registration_Info_UClass_ACPP_InteractablePawn.InnerSingleton,
			StaticRegisterNativesACPP_InteractablePawn,
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
	return Z_Registration_Info_UClass_ACPP_InteractablePawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_InteractablePawn_NoRegister()
{
	return ACPP_InteractablePawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_InteractablePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_InteractablePawn.h" },
		{ "ModuleRelativePath", "CPP_InteractablePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "CPP_InteractablePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_InteractablePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_InteractablePawn_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_InteractablePawn, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_InteractablePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_InteractablePawn_Statics::NewProp_InteractAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_InteractablePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_InteractablePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AUnreal_Final_2026Character,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Final_2026,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_InteractablePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_InteractablePawn_Statics::ClassParams = {
	&ACPP_InteractablePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPP_InteractablePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_InteractablePawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_InteractablePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_InteractablePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_InteractablePawn()
{
	if (!Z_Registration_Info_UClass_ACPP_InteractablePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_InteractablePawn.OuterSingleton, Z_Construct_UClass_ACPP_InteractablePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_InteractablePawn.OuterSingleton;
}
ACPP_InteractablePawn::ACPP_InteractablePawn() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_InteractablePawn);
ACPP_InteractablePawn::~ACPP_InteractablePawn() {}
// ********** End Class ACPP_InteractablePawn ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_CPP_InteractablePawn_h__Script_Unreal_Final_2026_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_InteractablePawn, ACPP_InteractablePawn::StaticClass, TEXT("ACPP_InteractablePawn"), &Z_Registration_Info_UClass_ACPP_InteractablePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_InteractablePawn), 2403748698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_CPP_InteractablePawn_h__Script_Unreal_Final_2026_3256444007(TEXT("/Script/Unreal_Final_2026"),
	Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_CPP_InteractablePawn_h__Script_Unreal_Final_2026_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_CPP_InteractablePawn_h__Script_Unreal_Final_2026_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
