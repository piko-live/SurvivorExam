// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/AbilitySystem/Abilities/MyProjectileSpell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectileSpell() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectile_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyGameplayAbility();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyProjectileSpell();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyProjectileSpell_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(UMyProjectileSpell::execSpawnProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile();
		P_NATIVE_END;
	}
	void UMyProjectileSpell::StaticRegisterNativesUMyProjectileSpell()
	{
		UClass* Class = UMyProjectileSpell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &UMyProjectileSpell::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyProjectileSpell_SpawnProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyProjectileSpell_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyProjectileSpell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyProjectileSpell_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProjectileSpell, nullptr, "SpawnProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyProjectileSpell_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyProjectileSpell_SpawnProjectile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMyProjectileSpell_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyProjectileSpell_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyProjectileSpell);
	UClass* Z_Construct_UClass_UMyProjectileSpell_NoRegister()
	{
		return UMyProjectileSpell::StaticClass();
	}
	struct Z_Construct_UClass_UMyProjectileSpell_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyProjectileSpell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMyGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyProjectileSpell_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyProjectileSpell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyProjectileSpell_SpawnProjectile, "SpawnProjectile" }, // 3356533194
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyProjectileSpell_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyProjectileSpell_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/MyProjectileSpell.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyProjectileSpell.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "MyProjectileSpell" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyProjectileSpell.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyProjectileSpell, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "MyProjectileSpell" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyProjectileSpell.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyProjectileSpell, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_DamageEffectClass_MetaData), Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_DamageEffectClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyProjectileSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyProjectileSpell_Statics::NewProp_DamageEffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyProjectileSpell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyProjectileSpell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyProjectileSpell_Statics::ClassParams = {
		&UMyProjectileSpell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyProjectileSpell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyProjectileSpell_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyProjectileSpell_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyProjectileSpell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyProjectileSpell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyProjectileSpell()
	{
		if (!Z_Registration_Info_UClass_UMyProjectileSpell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyProjectileSpell.OuterSingleton, Z_Construct_UClass_UMyProjectileSpell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyProjectileSpell.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UMyProjectileSpell>()
	{
		return UMyProjectileSpell::StaticClass();
	}
	UMyProjectileSpell::UMyProjectileSpell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyProjectileSpell);
	UMyProjectileSpell::~UMyProjectileSpell() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyProjectileSpell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyProjectileSpell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyProjectileSpell, UMyProjectileSpell::StaticClass, TEXT("UMyProjectileSpell"), &Z_Registration_Info_UClass_UMyProjectileSpell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyProjectileSpell), 3825200404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyProjectileSpell_h_3211092625(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyProjectileSpell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyProjectileSpell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
