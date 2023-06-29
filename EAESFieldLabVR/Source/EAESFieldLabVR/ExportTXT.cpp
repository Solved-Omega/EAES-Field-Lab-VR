// Fill out your copyright notice in the Description page of Project Settings.


#include "ExportTXT.h"

bool UExportTXT::WriteTXT(FString Text, FString FileName)
{
	return FFileHelper::SaveStringToFile(Text, *(FPaths::ProjectDir() + FileName));
}