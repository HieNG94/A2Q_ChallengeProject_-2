// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Reversi/ReversiPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReversiPlayerController() {}
// Cross Module References
	REVERSI_API UClass* Z_Construct_UClass_AReversiPlayerController_NoRegister();
	REVERSI_API UClass* Z_Construct_UClass_AReversiPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Reversi();
// End Cross Module References
	void AReversiPlayerController::StaticRegisterNativesAReversiPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AReversiPlayerController_NoRegister()
	{
		return AReversiPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AReversiPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReversiPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Reversi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ReversiPlayerController.h" },
		{ "ModuleRelativePath", "ReversiPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReversiPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReversiPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReversiPlayerController_Statics::ClassParams = {
		&AReversiPlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AReversiPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReversiPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReversiPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReversiPlayerController, 1894131924);
	template<> REVERSI_API UClass* StaticClass<AReversiPlayerController>()
	{
		return AReversiPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReversiPlayerController(Z_Construct_UClass_AReversiPlayerController, &AReversiPlayerController::StaticClass, TEXT("/Script/Reversi"), TEXT("AReversiPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReversiPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
