// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "seven_task_yuna/Public/Sparta_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSparta_GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
SEVEN_TASK_YUNA_API UClass* Z_Construct_UClass_ASparta_GameMode();
SEVEN_TASK_YUNA_API UClass* Z_Construct_UClass_ASparta_GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_seven_task_yuna();
// End Cross Module References

// Begin Class ASparta_GameMode
void ASparta_GameMode::StaticRegisterNativesASparta_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASparta_GameMode);
UClass* Z_Construct_UClass_ASparta_GameMode_NoRegister()
{
	return ASparta_GameMode::StaticClass();
}
struct Z_Construct_UClass_ASparta_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Sparta_GameMode.h" },
		{ "ModuleRelativePath", "Public/Sparta_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASparta_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASparta_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_seven_task_yuna,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASparta_GameMode_Statics::ClassParams = {
	&ASparta_GameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASparta_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASparta_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASparta_GameMode()
{
	if (!Z_Registration_Info_UClass_ASparta_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASparta_GameMode.OuterSingleton, Z_Construct_UClass_ASparta_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASparta_GameMode.OuterSingleton;
}
template<> SEVEN_TASK_YUNA_API UClass* StaticClass<ASparta_GameMode>()
{
	return ASparta_GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASparta_GameMode);
ASparta_GameMode::~ASparta_GameMode() {}
// End Class ASparta_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASparta_GameMode, ASparta_GameMode::StaticClass, TEXT("ASparta_GameMode"), &Z_Registration_Info_UClass_ASparta_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASparta_GameMode), 3929807199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_GameMode_h_2544909031(TEXT("/Script/seven_task_yuna"),
	Z_CompiledInDeferFile_FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jyn99_Documents_Unreal_Projects_seven_task_seven_task_yuna_Source_seven_task_yuna_Public_Sparta_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
