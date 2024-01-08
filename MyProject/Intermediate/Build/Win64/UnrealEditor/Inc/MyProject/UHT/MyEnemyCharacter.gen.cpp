// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/Character/MyEnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnemyCharacter() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyCharacterBase();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyEnemyCharacter();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyEnemyCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyEnemyCharacter::StaticRegisterNativesAMyEnemyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyEnemyCharacter);
	UClass* Z_Construct_UClass_AMyEnemyCharacter_NoRegister()
	{
		return AMyEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemyCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemyCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MyEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/MyEnemyCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyEnemyCharacter_Statics::ClassParams = {
		&AMyEnemyCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyEnemyCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyEnemyCharacter.OuterSingleton, Z_Construct_UClass_AMyEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyEnemyCharacter.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AMyEnemyCharacter>()
	{
		return AMyEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEnemyCharacter);
	AMyEnemyCharacter::~AMyEnemyCharacter() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyEnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyEnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyEnemyCharacter, AMyEnemyCharacter::StaticClass, TEXT("AMyEnemyCharacter"), &Z_Registration_Info_UClass_AMyEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyEnemyCharacter), 2397535924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyEnemyCharacter_h_1666275141(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyEnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
