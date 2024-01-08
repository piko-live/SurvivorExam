// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/AbilitySystem/Abilities/MyGameplayAbility.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameplayAbility() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyGameplayAbility();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UMyGameplayAbility::StaticRegisterNativesUMyGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameplayAbility);
	UClass* Z_Construct_UClass_UMyGameplayAbility_NoRegister()
	{
		return UMyGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupInputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartupInputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/MyGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_StartupInputTag_MetaData[] = {
		{ "Category", "MyGameplayAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/MyGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_StartupInputTag = { "StartupInputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameplayAbility, StartupInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_StartupInputTag_MetaData), Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_StartupInputTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_StartupInputTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameplayAbility_Statics::ClassParams = {
		&UMyGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMyGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UMyGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameplayAbility.OuterSingleton, Z_Construct_UClass_UMyGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameplayAbility.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UMyGameplayAbility>()
	{
		return UMyGameplayAbility::StaticClass();
	}
	UMyGameplayAbility::UMyGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameplayAbility);
	UMyGameplayAbility::~UMyGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameplayAbility, UMyGameplayAbility::StaticClass, TEXT("UMyGameplayAbility"), &Z_Registration_Info_UClass_UMyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameplayAbility), 1847021237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyGameplayAbility_h_2240570417(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_Abilities_MyGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
