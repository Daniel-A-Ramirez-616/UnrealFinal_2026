// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_Final_2026_init() {}
	UNREAL_FINAL_2026_API UFunction* Z_Construct_UDelegateFunction_Unreal_Final_2026_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Unreal_Final_2026;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Unreal_Final_2026()
	{
		if (!Z_Registration_Info_UPackage__Script_Unreal_Final_2026.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Unreal_Final_2026_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Unreal_Final_2026",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEC396609,
				0xBC7715B2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Unreal_Final_2026.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Unreal_Final_2026.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Unreal_Final_2026(Z_Construct_UPackage__Script_Unreal_Final_2026, TEXT("/Script/Unreal_Final_2026"), Z_Registration_Info_UPackage__Script_Unreal_Final_2026, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEC396609, 0xBC7715B2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
