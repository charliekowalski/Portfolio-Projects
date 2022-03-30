// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PP3_FPS_Survios/PP3_FPS_BaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePP3_FPS_BaseWeapon() {}
// Cross Module References
	PP3_FPS_SURVIOS_API UEnum* Z_Construct_UEnum_PP3_FPS_Survios_WeaponType();
	UPackage* Z_Construct_UPackage__Script_PP3_FPS_Survios();
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_BaseWeapon_NoRegister();
	PP3_FPS_SURVIOS_API UClass* Z_Construct_UClass_APP3_FPS_BaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* WeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PP3_FPS_Survios_WeaponType, Z_Construct_UPackage__Script_PP3_FPS_Survios(), TEXT("WeaponType"));
		}
		return Singleton;
	}
	template<> PP3_FPS_SURVIOS_API UEnum* StaticEnum<WeaponType>()
	{
		return WeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_WeaponType(WeaponType_StaticEnum, TEXT("/Script/PP3_FPS_Survios"), TEXT("WeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PP3_FPS_Survios_WeaponType_Hash() { return 857060176U; }
	UEnum* Z_Construct_UEnum_PP3_FPS_Survios_WeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PP3_FPS_Survios();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("WeaponType"), 0, Get_Z_Construct_UEnum_PP3_FPS_Survios_WeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WeaponType::DEFAULT", (int64)WeaponType::DEFAULT },
				{ "WeaponType::PROJECTILE", (int64)WeaponType::PROJECTILE },
				{ "WeaponType::HITSCAN", (int64)WeaponType::HITSCAN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//The type of weapon\n" },
				{ "DEFAULT.DisplayName", "Default" },
				{ "DEFAULT.Name", "WeaponType::DEFAULT" },
				{ "HITSCAN.DisplayName", "Hitscan" },
				{ "HITSCAN.Name", "WeaponType::HITSCAN" },
				{ "ModuleRelativePath", "PP3_FPS_BaseWeapon.h" },
				{ "PROJECTILE.DisplayName", "Projectile" },
				{ "PROJECTILE.Name", "WeaponType::PROJECTILE" },
				{ "ToolTip", "The type of weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PP3_FPS_Survios,
				nullptr,
				"WeaponType",
				"WeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void APP3_FPS_BaseWeapon::StaticRegisterNativesAPP3_FPS_BaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_APP3_FPS_BaseWeapon_NoRegister()
	{
		return APP3_FPS_BaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_weaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_weaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAmmoOnPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxAmmoOnPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoOnPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammoOnPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAmmoInClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxAmmoInClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoInClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammoInClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reloadSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PP3_FPS_Survios,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PP3_FPS_BaseWeapon.h" },
		{ "ModuleRelativePath", "PP3_FPS_BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_weaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_weaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The current type of weapon\n" },
		{ "ModuleRelativePath", "PP3_FPS_BaseWeapon.h" },
		{ "ToolTip", "The current type of weapon" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_weaponType = { "weaponType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APP3_FPS_BaseWeapon, weaponType), Z_Construct_UEnum_PP3_FPS_Survios_WeaponType, METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_weaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_weaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoOnPlayer_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The maxuimum ammout of ammo the player can carry\n" },
		{ "ModuleRelativePath", "PP3_FPS_BaseWeapon.h" },
		{ "ToolTip", "The maxuimum ammout of ammo the player can carry" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoOnPlayer = { "maxAmmoOnPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APP3_FPS_BaseWeapon, maxAmmoOnPlayer), METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoOnPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoOnPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoOnPlayer_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The current ammout of ammo on the player\n" },
		{ "ModuleRelativePath", "PP3_FPS_BaseWeapon.h" },
		{ "ToolTip", "The current ammout of ammo on the player" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoOnPlayer = { "ammoOnPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APP3_FPS_BaseWeapon, ammoOnPlayer), METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoOnPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoOnPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoInClip_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The maxuimum ammout of ammo the guns clip can carry\n" },
		{ "ModuleRelativePath", "PP3_FPS_BaseWeapon.h" },
		{ "ToolTip", "The maxuimum ammout of ammo the guns clip can carry" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoInClip = { "maxAmmoInClip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APP3_FPS_BaseWeapon, maxAmmoInClip), METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoInClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoInClip_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The current ammout in the clip\n" },
		{ "ModuleRelativePath", "PP3_FPS_BaseWeapon.h" },
		{ "ToolTip", "The current ammout in the clip" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoInClip = { "ammoInClip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APP3_FPS_BaseWeapon, ammoInClip), METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoInClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_reloadSpeed_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//The reload speed of the gun\n" },
		{ "ModuleRelativePath", "PP3_FPS_BaseWeapon.h" },
		{ "ToolTip", "The reload speed of the gun" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_reloadSpeed = { "reloadSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APP3_FPS_BaseWeapon, reloadSpeed), METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_reloadSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_reloadSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_weaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_weaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoOnPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoOnPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_maxAmmoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_ammoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::NewProp_reloadSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP3_FPS_BaseWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::ClassParams = {
		&APP3_FPS_BaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APP3_FPS_BaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APP3_FPS_BaseWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APP3_FPS_BaseWeapon, 2484849689);
	template<> PP3_FPS_SURVIOS_API UClass* StaticClass<APP3_FPS_BaseWeapon>()
	{
		return APP3_FPS_BaseWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APP3_FPS_BaseWeapon(Z_Construct_UClass_APP3_FPS_BaseWeapon, &APP3_FPS_BaseWeapon::StaticClass, TEXT("/Script/PP3_FPS_Survios"), TEXT("APP3_FPS_BaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APP3_FPS_BaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
