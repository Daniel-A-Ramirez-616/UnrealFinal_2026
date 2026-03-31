// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Final_2026/CPP_InteractableObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_InteractableObject() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNREAL_FINAL_2026_API UClass* Z_Construct_UClass_ACPP_InteractableObject();
UNREAL_FINAL_2026_API UClass* Z_Construct_UClass_ACPP_InteractableObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_Final_2026();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_InteractableObject Function OnUse ***********************************
static FName NAME_ACPP_InteractableObject_OnUse = FName(TEXT("OnUse"));
void ACPP_InteractableObject::OnUse()
{
	UFunction* Func = FindFunctionChecked(NAME_ACPP_InteractableObject_OnUse);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACPP_InteractableObject_OnUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_InteractableObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_InteractableObject_OnUse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_InteractableObject, nullptr, "OnUse", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_InteractableObject_OnUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_InteractableObject_OnUse_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACPP_InteractableObject_OnUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_InteractableObject_OnUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACPP_InteractableObject Function OnUse *************************************

// ********** Begin Class ACPP_InteractableObject **************************************************
void ACPP_InteractableObject::StaticRegisterNativesACPP_InteractableObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_InteractableObject;
UClass* ACPP_InteractableObject::GetPrivateStaticClass()
{
	using TClass = ACPP_InteractableObject;
	if (!Z_Registration_Info_UClass_ACPP_InteractableObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_InteractableObject"),
			Z_Registration_Info_UClass_ACPP_InteractableObject.InnerSingleton,
			StaticRegisterNativesACPP_InteractableObject,
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
	return Z_Registration_Info_UClass_ACPP_InteractableObject.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_InteractableObject_NoRegister()
{
	return ACPP_InteractableObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_InteractableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_InteractableObject.h" },
		{ "ModuleRelativePath", "CPP_InteractableObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_InteractableObject_OnUse, "OnUse" }, // 4187222608
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_InteractableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_InteractableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Final_2026,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_InteractableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_InteractableObject_Statics::ClassParams = {
	&ACPP_InteractableObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_InteractableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_InteractableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_InteractableObject()
{
	if (!Z_Registration_Info_UClass_ACPP_InteractableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_InteractableObject.OuterSingleton, Z_Construct_UClass_ACPP_InteractableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_InteractableObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_InteractableObject);
ACPP_InteractableObject::~ACPP_InteractableObject() {}
// ********** End Class ACPP_InteractableObject ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_CPP_InteractableObject_h__Script_Unreal_Final_2026_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_InteractableObject, ACPP_InteractableObject::StaticClass, TEXT("ACPP_InteractableObject"), &Z_Registration_Info_UClass_ACPP_InteractableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_InteractableObject), 1613290525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_CPP_InteractableObject_h__Script_Unreal_Final_2026_3142486213(TEXT("/Script/Unreal_Final_2026"),
	Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_CPP_InteractableObject_h__Script_Unreal_Final_2026_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Working_UnrealFinal_2026_Unreal_Final_2026_Source_Unreal_Final_2026_CPP_InteractableObject_h__Script_Unreal_Final_2026_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
