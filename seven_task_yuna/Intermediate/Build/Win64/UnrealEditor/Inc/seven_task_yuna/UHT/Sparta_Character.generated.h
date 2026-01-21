// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sparta_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef SEVEN_TASK_YUNA_Sparta_Character_generated_h
#error "Sparta_Character.generated.h already included, missing '#pragma once' in Sparta_Character.h"
#endif
#define SEVEN_TASK_YUNA_Sparta_Character_generated_h

#define FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMove);


#define FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASparta_Character(); \
	friend struct Z_Construct_UClass_ASparta_Character_Statics; \
public: \
	DECLARE_CLASS(ASparta_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/seven_task_yuna"), NO_API) \
	DECLARE_SERIALIZER(ASparta_Character)


#define FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASparta_Character(ASparta_Character&&); \
	ASparta_Character(const ASparta_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASparta_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASparta_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASparta_Character) \
	NO_API virtual ~ASparta_Character();


#define FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_13_PROLOG
#define FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEVEN_TASK_YUNA_API UClass* StaticClass<class ASparta_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
