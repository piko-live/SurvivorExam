// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/MyCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyCharacterBase_generated_h
#error "MyCharacterBase.generated.h already included, missing '#pragma once' in MyCharacterBase.h"
#endif
#define MYPROJECT_MyCharacterBase_generated_h

#define FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_SPARSE_DATA
#define FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacterBase(); \
	friend struct Z_Construct_UClass_AMyCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AMyCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AMyCharacterBase*>(this); }


#define FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacterBase(AMyCharacterBase&&); \
	NO_API AMyCharacterBase(const AMyCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacterBase) \
	NO_API virtual ~AMyCharacterBase();


#define FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_11_PROLOG
#define FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_Character_MyCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
