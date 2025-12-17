// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFnLib.generated.h"

/**
 * 
 */
UCLASS()
class HOCKEY95_API UBPFnLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static void SetViewMode(EViewModeIndex ViewMode);
	
};