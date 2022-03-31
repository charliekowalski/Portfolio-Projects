// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PP3_FPS_Survios/PP3_FPS_Rifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePP3_FPS_Rifle() {}
// Cross Module References
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_Rifle_NoRegister();
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_Rifle();
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_BaseWeapon();
	UPackage* Z_Construct_UPackage__Script_PP3_FPS_Survios();
// End Cross Module References
	void APP3_FPS_Rifle::StaticRegisterNativesAPP3_FPS_Rifle()
	{
	}
	UClass* Z_Construct_UClass_APP3_FPS_Rifle_NoRegister()
	{
		return APP3_FPS_Rifle::StaticClass();
	}
	struct Z_Construct_UClass_APP3_FPS_Rifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeBetweenShots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APP3_FPS_Rifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APP3_FPS_BaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_PP3_FPS_Survios,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_Rifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PP3_FPS_Rifle.h" },
		{ "ModuleRelativePath", "PP3_FPS_Rifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_Rifle_Statics::NewProp_timeBetweenShots_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The reload speed of the gun\n" },
		{ "ModuleRelativePath", "PP3_FPS_Rifle.h" },
		{ "ToolTip", "The reload speed of the gun" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APP3_FPS_Rifle_Statics::NewProp_timeBetweenShots = { "timeBetweenShots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APP3_FPS_Rifle, timeBetweenShots), METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_Rifle_Statics::NewProp_timeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_Rifle_Statics::NewProp_timeBetweenShots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APP3_FPS_Rifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP3_FPS_Rifle_Statics::NewProp_timeBetweenShots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APP3_FPS_Rifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP3_FPS_Rifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APP3_FPS_Rifle_Statics::ClassParams = {
		&APP3_FPS_Rifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APP3_FPS_Rifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_Rifle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_Rifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_Rifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APP3_FPS_Rifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APP3_FPS_Rifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APP3_FPS_Rifle, 1542067114);
	template<> PP3_FPS_SURVIOS_API UClass* StaticClass<APP3_FPS_Rifle>()
	{
		return APP3_FPS_Rifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APP3_FPS_Rifle(Z_Construct_UClass_APP3_FPS_Rifle, &APP3_FPS_Rifle::StaticClass, TEXT("/Script/PP3_FPS_Survios"), TEXT("APP3_FPS_Rifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APP3_FPS_Rifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
