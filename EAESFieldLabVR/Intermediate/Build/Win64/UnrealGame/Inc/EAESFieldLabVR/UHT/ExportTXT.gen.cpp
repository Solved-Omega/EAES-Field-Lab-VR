// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EAESFieldLabVR/ExportTXT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportTXT() {}
// Cross Module References
	EAESFIELDLABVR_API UClass* Z_Construct_UClass_UExportTXT();
	EAESFIELDLABVR_API UClass* Z_Construct_UClass_UExportTXT_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EAESFieldLabVR();
// End Cross Module References
	DEFINE_FUNCTION(UExportTXT::execWriteTXT)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExportTXT::WriteTXT(Z_Param_Text,Z_Param_Filename);
		P_NATIVE_END;
	}
	void UExportTXT::StaticRegisterNativesUExportTXT()
	{
		UClass* Class = UExportTXT::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WriteTXT", &UExportTXT::execWriteTXT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExportTXT_WriteTXT_Statics
	{
		struct ExportTXT_eventWriteTXT_Parms
		{
			FString Text;
			FString Filename;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExportTXT_eventWriteTXT_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ExportTXT_eventWriteTXT_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExportTXT_eventWriteTXT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ExportTXT_eventWriteTXT_Parms), &Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::Function_MetaDataParams[] = {
		{ "Category", "Export Text" },
		{ "Keywords", "Write to Text File" },
		{ "ModuleRelativePath", "ExportTXT.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExportTXT, nullptr, "WriteTXT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::ExportTXT_eventWriteTXT_Parms), Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExportTXT_WriteTXT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExportTXT_WriteTXT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExportTXT);
	UClass* Z_Construct_UClass_UExportTXT_NoRegister()
	{
		return UExportTXT::StaticClass();
	}
	struct Z_Construct_UClass_UExportTXT_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExportTXT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EAESFieldLabVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExportTXT_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExportTXT_WriteTXT, "WriteTXT" }, // 1358776498
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportTXT_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExportTXT.h" },
		{ "ModuleRelativePath", "ExportTXT.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExportTXT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportTXT>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExportTXT_Statics::ClassParams = {
		&UExportTXT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExportTXT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExportTXT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExportTXT()
	{
		if (!Z_Registration_Info_UClass_UExportTXT.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExportTXT.OuterSingleton, Z_Construct_UClass_UExportTXT_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExportTXT.OuterSingleton;
	}
	template<> EAESFIELDLABVR_API UClass* StaticClass<UExportTXT>()
	{
		return UExportTXT::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExportTXT);
	UExportTXT::~UExportTXT() {}
	struct Z_CompiledInDeferFile_FID_Users_300339869_Documents_GitHub_EAES_Field_Lab_VR_Reworked_EAESFieldLabVR_Source_EAESFieldLabVR_ExportTXT_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_300339869_Documents_GitHub_EAES_Field_Lab_VR_Reworked_EAESFieldLabVR_Source_EAESFieldLabVR_ExportTXT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExportTXT, UExportTXT::StaticClass, TEXT("UExportTXT"), &Z_Registration_Info_UClass_UExportTXT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExportTXT), 185546107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_300339869_Documents_GitHub_EAES_Field_Lab_VR_Reworked_EAESFieldLabVR_Source_EAESFieldLabVR_ExportTXT_h_3326466670(TEXT("/Script/EAESFieldLabVR"),
		Z_CompiledInDeferFile_FID_Users_300339869_Documents_GitHub_EAES_Field_Lab_VR_Reworked_EAESFieldLabVR_Source_EAESFieldLabVR_ExportTXT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_300339869_Documents_GitHub_EAES_Field_Lab_VR_Reworked_EAESFieldLabVR_Source_EAESFieldLabVR_ExportTXT_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
