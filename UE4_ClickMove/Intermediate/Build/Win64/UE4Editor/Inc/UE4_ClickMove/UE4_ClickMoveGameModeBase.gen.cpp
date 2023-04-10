// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_ClickMove/UE4_ClickMoveGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4_ClickMoveGameModeBase() {}
// Cross Module References
	UE4_CLICKMOVE_API UClass* Z_Construct_UClass_AUE4_ClickMoveGameModeBase_NoRegister();
	UE4_CLICKMOVE_API UClass* Z_Construct_UClass_AUE4_ClickMoveGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4_ClickMove();
// End Cross Module References
	void AUE4_ClickMoveGameModeBase::StaticRegisterNativesAUE4_ClickMoveGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE4_ClickMoveGameModeBase_NoRegister()
	{
		return AUE4_ClickMoveGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE4_ClickMoveGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4_ClickMoveGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_ClickMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_ClickMoveGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4_ClickMoveGameModeBase.h" },
		{ "ModuleRelativePath", "UE4_ClickMoveGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4_ClickMoveGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4_ClickMoveGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4_ClickMoveGameModeBase_Statics::ClassParams = {
		&AUE4_ClickMoveGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUE4_ClickMoveGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_ClickMoveGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4_ClickMoveGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4_ClickMoveGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4_ClickMoveGameModeBase, 124854672);
	template<> UE4_CLICKMOVE_API UClass* StaticClass<AUE4_ClickMoveGameModeBase>()
	{
		return AUE4_ClickMoveGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4_ClickMoveGameModeBase(Z_Construct_UClass_AUE4_ClickMoveGameModeBase, &AUE4_ClickMoveGameModeBase::StaticClass, TEXT("/Script/UE4_ClickMove"), TEXT("AUE4_ClickMoveGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4_ClickMoveGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
