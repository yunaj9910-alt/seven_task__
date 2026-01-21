// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "seven_task_yuna/Public/Sparta_Character.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSparta_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
SEVEN_TASK_YUNA_API UClass* Z_Construct_UClass_ASparta_Character();
SEVEN_TASK_YUNA_API UClass* Z_Construct_UClass_ASparta_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_seven_task_yuna();
// End Cross Module References

// Begin Class ASparta_Character Function Look
struct Z_Construct_UFunction_ASparta_Character_Look_Statics
{
	struct Sparta_Character_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Character_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Character_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Character_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Character_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Character_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Character, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ASparta_Character_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Character_Look_Statics::Sparta_Character_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Character_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Character_Look_Statics::Sparta_Character_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Character_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Character_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Character::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Character Function Look

// Begin Class ASparta_Character Function Move
struct Z_Construct_UFunction_ASparta_Character_Move_Statics
{
	struct Sparta_Character_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Character_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Character_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Character_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Character_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Character_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Character, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ASparta_Character_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Character_Move_Statics::Sparta_Character_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Character_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Character_Move_Statics::Sparta_Character_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Character_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Character_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Character::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Character Function Move

// Begin Class ASparta_Character Function StartJump
struct Z_Construct_UFunction_ASparta_Character_StartJump_Statics
{
	struct Sparta_Character_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Character_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Character_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Character_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Character_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Character_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Character, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_ASparta_Character_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Character_StartJump_Statics::Sparta_Character_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Character_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Character_StartJump_Statics::Sparta_Character_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Character_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Character_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Character::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Character Function StartJump

// Begin Class ASparta_Character Function StartSprint
struct Z_Construct_UFunction_ASparta_Character_StartSprint_Statics
{
	struct Sparta_Character_eventStartSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Character_eventStartSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Character, nullptr, "StartSprint", nullptr, nullptr, Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::Sparta_Character_eventStartSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::Sparta_Character_eventStartSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Character_StartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Character_StartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Character::execStartSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Character Function StartSprint

// Begin Class ASparta_Character Function StopJump
struct Z_Construct_UFunction_ASparta_Character_StopJump_Statics
{
	struct Sparta_Character_eventStopJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Character_StopJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Character_eventStopJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Character_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Character_StopJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Character_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Character, nullptr, "StopJump", nullptr, nullptr, Z_Construct_UFunction_ASparta_Character_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Character_StopJump_Statics::Sparta_Character_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Character_StopJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Character_StopJump_Statics::Sparta_Character_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Character_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Character_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Character::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Character Function StopJump

// Begin Class ASparta_Character Function StopSprint
struct Z_Construct_UFunction_ASparta_Character_StopSprint_Statics
{
	struct Sparta_Character_eventStopSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sparta_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Sparta_Character_eventStopSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASparta_Character, nullptr, "StopSprint", nullptr, nullptr, Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::Sparta_Character_eventStopSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::Sparta_Character_eventStopSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASparta_Character_StopSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASparta_Character_StopSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASparta_Character::execStopSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASparta_Character Function StopSprint

// Begin Class ASparta_Character
void ASparta_Character::StaticRegisterNativesASparta_Character()
{
	UClass* Class = ASparta_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &ASparta_Character::execLook },
		{ "Move", &ASparta_Character::execMove },
		{ "StartJump", &ASparta_Character::execStartJump },
		{ "StartSprint", &ASparta_Character::execStartSprint },
		{ "StopJump", &ASparta_Character::execStopJump },
		{ "StopSprint", &ASparta_Character::execStopSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASparta_Character);
UClass* Z_Construct_UClass_ASparta_Character_NoRegister()
{
	return ASparta_Character::StaticClass();
}
struct Z_Construct_UClass_ASparta_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Sparta_Character.h" },
		{ "ModuleRelativePath", "Public/Sparta_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sparta_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sparta_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASparta_Character_Look, "Look" }, // 2290600964
		{ &Z_Construct_UFunction_ASparta_Character_Move, "Move" }, // 3534757791
		{ &Z_Construct_UFunction_ASparta_Character_StartJump, "StartJump" }, // 2456221286
		{ &Z_Construct_UFunction_ASparta_Character_StartSprint, "StartSprint" }, // 3510765815
		{ &Z_Construct_UFunction_ASparta_Character_StopJump, "StopJump" }, // 3750320609
		{ &Z_Construct_UFunction_ASparta_Character_StopSprint, "StopSprint" }, // 1676887792
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASparta_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASparta_Character_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparta_Character, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASparta_Character_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASparta_Character, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASparta_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparta_Character_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASparta_Character_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASparta_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_seven_task_yuna,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASparta_Character_Statics::ClassParams = {
	&ASparta_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASparta_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_Character_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ASparta_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASparta_Character()
{
	if (!Z_Registration_Info_UClass_ASparta_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASparta_Character.OuterSingleton, Z_Construct_UClass_ASparta_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASparta_Character.OuterSingleton;
}
template<> SEVEN_TASK_YUNA_API UClass* StaticClass<ASparta_Character>()
{
	return ASparta_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASparta_Character);
ASparta_Character::~ASparta_Character() {}
// End Class ASparta_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASparta_Character, ASparta_Character::StaticClass, TEXT("ASparta_Character"), &Z_Registration_Info_UClass_ASparta_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASparta_Character), 2057853331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_3505589104(TEXT("/Script/seven_task_yuna"),
	Z_CompiledInDeferFile_FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
