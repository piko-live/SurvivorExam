// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/MyProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYPROJECT_MyProjectile_generated_h
#error "MyProjectile.generated.h already included, missing '#pragma once' in MyProjectile.h"
#endif
#define MYPROJECT_MyProjectile_generated_h

#define FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_SPARSE_DATA
#define FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectile)


#define FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectile(AMyProjectile&&); \
	NO_API AMyProjectile(const AMyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectile) \
	NO_API virtual ~AMyProjectile();


#define FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_13_PROLOG
#define FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_Actor_MyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
