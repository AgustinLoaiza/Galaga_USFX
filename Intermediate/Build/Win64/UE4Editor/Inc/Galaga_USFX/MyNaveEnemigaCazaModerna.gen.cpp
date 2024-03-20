// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/MyNaveEnemigaCazaModerna.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNaveEnemigaCazaModerna() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AMyNaveEnemigaCazaModerna_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AMyNaveEnemigaCazaModerna();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaCaza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AMyNaveEnemigaCazaModerna::StaticRegisterNativesAMyNaveEnemigaCazaModerna()
	{
	}
	UClass* Z_Construct_UClass_AMyNaveEnemigaCazaModerna_NoRegister()
	{
		return AMyNaveEnemigaCazaModerna::StaticClass();
	}
	struct Z_Construct_UClass_AMyNaveEnemigaCazaModerna_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNaveEnemigaCazaModerna_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaCaza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNaveEnemigaCazaModerna_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyNaveEnemigaCazaModerna.h" },
		{ "ModuleRelativePath", "MyNaveEnemigaCazaModerna.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNaveEnemigaCazaModerna_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNaveEnemigaCazaModerna>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNaveEnemigaCazaModerna_Statics::ClassParams = {
		&AMyNaveEnemigaCazaModerna::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyNaveEnemigaCazaModerna_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyNaveEnemigaCazaModerna_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNaveEnemigaCazaModerna()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNaveEnemigaCazaModerna_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNaveEnemigaCazaModerna, 2721915642);
	template<> GALAGA_USFX_API UClass* StaticClass<AMyNaveEnemigaCazaModerna>()
	{
		return AMyNaveEnemigaCazaModerna::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNaveEnemigaCazaModerna(Z_Construct_UClass_AMyNaveEnemigaCazaModerna, &AMyNaveEnemigaCazaModerna::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AMyNaveEnemigaCazaModerna"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNaveEnemigaCazaModerna);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
