// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Cometa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCometa() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACometa_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ACometa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACometa::StaticRegisterNativesACometa()
	{
	}
	UClass* Z_Construct_UClass_ACometa_NoRegister()
	{
		return ACometa::StaticClass();
	}
	struct Z_Construct_UClass_ACometa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaCometa_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaCometa;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACometa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACometa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cometa.h" },
		{ "ModuleRelativePath", "Cometa.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACometa_Statics::NewProp_mallaCometa_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cometa.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACometa_Statics::NewProp_mallaCometa = { "mallaCometa", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACometa, mallaCometa), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACometa_Statics::NewProp_mallaCometa_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACometa_Statics::NewProp_mallaCometa_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACometa_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACometa_Statics::NewProp_mallaCometa,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACometa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACometa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACometa_Statics::ClassParams = {
		&ACometa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACometa_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACometa_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACometa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACometa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACometa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACometa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACometa, 2289823797);
	template<> GALAGA_USFX_API UClass* StaticClass<ACometa>()
	{
		return ACometa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACometa(Z_Construct_UClass_ACometa, &ACometa::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ACometa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACometa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
