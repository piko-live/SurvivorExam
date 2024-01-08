// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/MyAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef MYPROJECT_MyAttributeSet_generated_h
#error "MyAttributeSet.generated.h already included, missing '#pragma once' in MyAttributeSet.h"
#endif
#define MYPROJECT_MyAttributeSet_generated_h

#define FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_SPARSE_DATA
#define FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAttributeSet(); \
	friend struct Z_Construct_UClass_UMyAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMyAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UMyAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMyAttributeSet) \
public:


#define FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAttributeSet(UMyAttributeSet&&); \
	NO_API UMyAttributeSet(const UMyAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAttributeSet) \
	NO_API virtual ~UMyAttributeSet();


#define FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_19_PROLOG
#define FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UMyAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_AbilitySystem_MyAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
