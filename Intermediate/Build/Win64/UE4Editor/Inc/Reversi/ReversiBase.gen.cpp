// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Reversi/ReversiBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReversiBase() {}
// Cross Module References
	REVERSI_API UClass* Z_Construct_UClass_AReversiBase_NoRegister();
	REVERSI_API UClass* Z_Construct_UClass_AReversiBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Reversi();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AReversiBase::execUpdateBoard)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SelectedSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBoard(Z_Param_SelectedSize);
		P_NATIVE_END;
	}
	void AReversiBase::StaticRegisterNativesAReversiBase()
	{
		UClass* Class = AReversiBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateBoard", &AReversiBase::execUpdateBoard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics
	{
		struct ReversiBase_eventUpdateBoard_Parms
		{
			int32 SelectedSize;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::NewProp_SelectedSize = { "SelectedSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReversiBase_eventUpdateBoard_Parms, SelectedSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::NewProp_SelectedSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Update board size and camera\n" },
		{ "ModuleRelativePath", "ReversiBase.h" },
		{ "ToolTip", "Update board size and camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReversiBase, nullptr, "UpdateBoard", nullptr, nullptr, sizeof(ReversiBase_eventUpdateBoard_Parms), Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReversiBase_UpdateBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReversiBase_UpdateBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AReversiBase_NoRegister()
	{
		return AReversiBase::StaticClass();
	}
	struct Z_Construct_UClass_AReversiBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoardBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoardBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReversiBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Reversi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReversiBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReversiBase_UpdateBoard, "UpdateBoard" }, // 2658060761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ReversiBase.h" },
		{ "ModuleRelativePath", "ReversiBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase_MetaData[] = {
		{ "Category", "ReversiBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReversiBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase = { "BoardBase", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiBase, BoardBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "ReversiBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReversiBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiBase, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiBase_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "ReversiBase" },
		{ "ModuleRelativePath", "ReversiBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReversiBase_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiBase, Size), METADATA_PARAMS(Z_Construct_UClass_AReversiBase_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReversiBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiBase_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReversiBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReversiBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReversiBase_Statics::ClassParams = {
		&AReversiBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AReversiBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReversiBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReversiBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReversiBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReversiBase, 1151463990);
	template<> REVERSI_API UClass* StaticClass<AReversiBase>()
	{
		return AReversiBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReversiBase(Z_Construct_UClass_AReversiBase, &AReversiBase::StaticClass, TEXT("/Script/Reversi"), TEXT("AReversiBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReversiBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
