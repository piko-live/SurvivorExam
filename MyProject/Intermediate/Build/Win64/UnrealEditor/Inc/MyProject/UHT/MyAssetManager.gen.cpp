// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/MyAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAssetManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyAssetManager();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyAssetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UMyAssetManager::StaticRegisterNativesUMyAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAssetManager);
	UClass* Z_Construct_UClass_UMyAssetManager_NoRegister()
	{
		return UMyAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UMyAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAssetManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAssetManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyAssetManager.h" },
		{ "ModuleRelativePath", "Public/MyAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAssetManager_Statics::ClassParams = {
		&UMyAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAssetManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyAssetManager()
	{
		if (!Z_Registration_Info_UClass_UMyAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAssetManager.OuterSingleton, Z_Construct_UClass_UMyAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyAssetManager.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UMyAssetManager>()
	{
		return UMyAssetManager::StaticClass();
	}
	UMyAssetManager::UMyAssetManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAssetManager);
	UMyAssetManager::~UMyAssetManager() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MyAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MyAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyAssetManager, UMyAssetManager::StaticClass, TEXT("UMyAssetManager"), &Z_Registration_Info_UClass_UMyAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAssetManager), 1375133054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MyAssetManager_h_2275840139(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MyAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MyAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
