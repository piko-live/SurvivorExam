// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/Character/MyPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerCharacter() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyCharacterBase();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyPlayerCharacter();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyPlayerCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyPlayerCharacter::StaticRegisterNativesAMyPlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerCharacter);
	UClass* Z_Construct_UClass_AMyPlayerCharacter_NoRegister()
	{
		return AMyPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MyPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/MyPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerCharacter_Statics::ClassParams = {
		&AMyPlayerCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerCharacter.OuterSingleton, Z_Construct_UClass_AMyPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayerCharacter.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AMyPlayerCharacter>()
	{
		return AMyPlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerCharacter);
	AMyPlayerCharacter::~AMyPlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyPlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerCharacter, AMyPlayerCharacter::StaticClass, TEXT("AMyPlayerCharacter"), &Z_Registration_Info_UClass_AMyPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerCharacter), 1160415665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyPlayerCharacter_h_3674432168(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_Character_MyPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
