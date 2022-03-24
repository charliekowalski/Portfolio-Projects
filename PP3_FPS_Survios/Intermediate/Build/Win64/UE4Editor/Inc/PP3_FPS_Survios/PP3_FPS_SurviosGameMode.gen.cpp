// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PP3_FPS_Survios/PP3_FPS_SurviosGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePP3_FPS_SurviosGameMode() {}
// Cross Module References
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_SurviosGameMode_NoRegister();
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_SurviosGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PP3_FPS_Survios();
// End Cross Module References
	void APP3_FPS_SurviosGameMode::StaticRegisterNativesAPP3_FPS_SurviosGameMode()
	{
	}
	UClass* Z_Construct_UClass_APP3_FPS_SurviosGameMode_NoRegister()
	{
		return APP3_FPS_SurviosGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APP3_FPS_SurviosGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APP3_FPS_SurviosGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PP3_FPS_Survios,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_SurviosGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PP3_FPS_SurviosGameMode.h" },
		{ "ModuleRelativePath", "PP3_FPS_SurviosGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APP3_FPS_SurviosGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP3_FPS_SurviosGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APP3_FPS_SurviosGameMode_Statics::ClassParams = {
		&APP3_FPS_SurviosGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_SurviosGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_SurviosGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APP3_FPS_SurviosGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APP3_FPS_SurviosGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APP3_FPS_SurviosGameMode, 128103954);
	template<> PP3_FPS_SURVIOS_API UClass* StaticClass<APP3_FPS_SurviosGameMode>()
	{
		return APP3_FPS_SurviosGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APP3_FPS_SurviosGameMode(Z_Construct_UClass_APP3_FPS_SurviosGameMode, &APP3_FPS_SurviosGameMode::StaticClass, TEXT("/Script/PP3_FPS_Survios"), TEXT("APP3_FPS_SurviosGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APP3_FPS_SurviosGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
