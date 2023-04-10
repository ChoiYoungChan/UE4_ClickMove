// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_ClickMove/ClickMoveCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickMoveCharacter() {}
// Cross Module References
	UE4_CLICKMOVE_API UClass* Z_Construct_UClass_AClickMoveCharacter_NoRegister();
	UE4_CLICKMOVE_API UClass* Z_Construct_UClass_AClickMoveCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UE4_ClickMove();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AClickMoveCharacter::StaticRegisterNativesAClickMoveCharacter()
	{
	}
	UClass* Z_Construct_UClass_AClickMoveCharacter_NoRegister()
	{
		return AClickMoveCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AClickMoveCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArmComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClickMoveCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_ClickMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickMoveCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ClickMoveCharacter.h" },
		{ "ModuleRelativePath", "ClickMoveCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_cameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// like rpg game, will be used to set the camera's viewpoint\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClickMoveCharacter.h" },
		{ "ToolTip", "like rpg game, will be used to set the camera's viewpoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_cameraComponent = { "cameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClickMoveCharacter, cameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_cameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_cameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_springArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClickMoveCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_springArmComponent = { "springArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClickMoveCharacter, springArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_springArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_springArmComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClickMoveCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_cameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClickMoveCharacter_Statics::NewProp_springArmComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClickMoveCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClickMoveCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClickMoveCharacter_Statics::ClassParams = {
		&AClickMoveCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AClickMoveCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AClickMoveCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClickMoveCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClickMoveCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClickMoveCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClickMoveCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClickMoveCharacter, 2986450620);
	template<> UE4_CLICKMOVE_API UClass* StaticClass<AClickMoveCharacter>()
	{
		return AClickMoveCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClickMoveCharacter(Z_Construct_UClass_AClickMoveCharacter, &AClickMoveCharacter::StaticClass, TEXT("/Script/UE4_ClickMove"), TEXT("AClickMoveCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClickMoveCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
