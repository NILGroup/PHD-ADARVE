// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RR_FileManager.generated.h"

/**
 * 
 */
UCLASS()
class RADIATIONROOM_API URR_FileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, category = "RR File Manager")
	static bool DirectoryExists(FString Path, FString DirectoryName);

	UFUNCTION(BlueprintCallable, BlueprintPure, category = "RR File Manager")
	static bool FileExists(FString Path, FString FileName);

	UFUNCTION(BlueprintCallable, category = "RR File Manager")
	static void CreateDirectory(FString Path, FString DirectoryName);

	UFUNCTION(BlueprintCallable, category = "RR File Manager")
	static FString ReadFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, category = "RR File Manager")
	static void WriteFile(FString FilePath, FString String, bool& bOutSuccess, FString& OutInfoMessage);
	
};
