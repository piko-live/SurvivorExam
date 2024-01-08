// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/AbilitySystem/MyAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAbilitySystemComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyAbilitySystemComponent();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UMyAbilitySystemComponent::StaticRegisterNativesUMyAbilitySystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAbilitySystemComponent);
	UClass* Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister()
	{
		return UMyAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAbilitySystemComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/MyAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAbilitySystemComponent_Statics::ClassParams = {
		&UMyAbilitySystemComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UMyAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UMyAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyAbilitySystemComponent.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UMyAbilitySystemComponent>()
	{
		return UMyAbilitySystemComponent::StaticClass();
	}
	UMyAbilitySystemComponent::UMyAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAbilitySystemComponent);
	UMyAbilitySystemComponent::~UMyAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyAbilitySystemComponent, UMyAbilitySystemComponent::StaticClass, TEXT("UMyAbilitySystemComponent"), &Z_Registration_Info_UClass_UMyAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAbilitySystemComponent), 720286279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAbilitySystemComponent_h_3158578608(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
