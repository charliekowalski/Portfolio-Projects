// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PP3_FPS_Survios/PP3_FPS_GrenadeLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePP3_FPS_GrenadeLauncher() {}
// Cross Module References
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_GrenadeLauncher_NoRegister();
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_GrenadeLauncher();
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_BaseWeapon();
	UPackage* Z_Construct_UPackage__Script_PP3_FPS_Survios();
// End Cross Module References
	void APP3_FPS_GrenadeLauncher::StaticRegisterNativesAPP3_FPS_GrenadeLauncher()
	{
	}
	UClass* Z_Construct_UClass_APP3_FPS_GrenadeLauncher_NoRegister()
	{
		return APP3_FPS_GrenadeLauncher::StaticClass();
	}
	struct Z_Construct_UClass_APP3_FPS_GrenadeLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APP3_FPS_GrenadeLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APP3_FPS_BaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_PP3_FPS_Survios,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_GrenadeLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PP3_FPS_GrenadeLauncher.h" },
		{ "ModuleRelativePath", "PP3_FPS_GrenadeLauncher.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APP3_FPS_GrenadeLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP3_FPS_GrenadeLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APP3_FPS_GrenadeLauncher_Statics::ClassParams = {
		&APP3_FPS_GrenadeLauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_GrenadeLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_GrenadeLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APP3_FPS_GrenadeLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APP3_FPS_GrenadeLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APP3_FPS_GrenadeLauncher, 4271533048);
	template<> PP3_FPS_SURVIOS_API UClass* StaticClass<APP3_FPS_GrenadeLauncher>()
	{
		return APP3_FPS_GrenadeLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APP3_FPS_GrenadeLauncher(Z_Construct_UClass_APP3_FPS_GrenadeLauncher, &APP3_FPS_GrenadeLauncher::StaticClass, TEXT("/Script/PP3_FPS_Survios"), TEXT("APP3_FPS_GrenadeLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APP3_FPS_GrenadeLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
