// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PP3_FPS_Survios/PP3_FPS_SurviosHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePP3_FPS_SurviosHUD() {}
// Cross Module References
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_SurviosHUD_NoRegister();
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_SurviosHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PP3_FPS_Survios();
// End Cross Module References
	void APP3_FPS_SurviosHUD::StaticRegisterNativesAPP3_FPS_SurviosHUD()
	{
	}
	UClass* Z_Construct_UClass_APP3_FPS_SurviosHUD_NoRegister()
	{
		return APP3_FPS_SurviosHUD::StaticClass();
	}
	struct Z_Construct_UClass_APP3_FPS_SurviosHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APP3_FPS_SurviosHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PP3_FPS_Survios,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_SurviosHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PP3_FPS_SurviosHUD.h" },
		{ "ModuleRelativePath", "PP3_FPS_SurviosHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APP3_FPS_SurviosHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP3_FPS_SurviosHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APP3_FPS_SurviosHUD_Statics::ClassParams = {
		&APP3_FPS_SurviosHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_SurviosHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_SurviosHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APP3_FPS_SurviosHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APP3_FPS_SurviosHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APP3_FPS_SurviosHUD, 31906779);
	template<> PP3_FPS_SURVIOS_API UClass* StaticClass<APP3_FPS_SurviosHUD>()
	{
		return APP3_FPS_SurviosHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APP3_FPS_SurviosHUD(Z_Construct_UClass_APP3_FPS_SurviosHUD, &APP3_FPS_SurviosHUD::StaticClass, TEXT("/Script/PP3_FPS_Survios"), TEXT("APP3_FPS_SurviosHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APP3_FPS_SurviosHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
