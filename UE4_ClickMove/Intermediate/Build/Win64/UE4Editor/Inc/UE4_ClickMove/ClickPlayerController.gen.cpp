// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_ClickMove/ClickPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickPlayerController() {}
// Cross Module References
	UE4_CLICKMOVE_API UClass* Z_Construct_UClass_AClickPlayerController_NoRegister();
	UE4_CLICKMOVE_API UClass* Z_Construct_UClass_AClickPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UE4_ClickMove();
// End Cross Module References
	void AClickPlayerController::StaticRegisterNativesAClickPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AClickPlayerController_NoRegister()
	{
		return AClickPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AClickPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClickPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_ClickMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ClickPlayerController.h" },
		{ "ModuleRelativePath", "ClickPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClickPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClickPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClickPlayerController_Statics::ClassParams = {
		&AClickPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClickPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClickPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClickPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClickPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClickPlayerController, 2961299904);
	template<> UE4_CLICKMOVE_API UClass* StaticClass<AClickPlayerController>()
	{
		return AClickPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClickPlayerController(Z_Construct_UClass_AClickPlayerController, &AClickPlayerController::StaticClass, TEXT("/Script/UE4_ClickMove"), TEXT("AClickPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClickPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
