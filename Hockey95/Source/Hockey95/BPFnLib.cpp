// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFnLib.h"

void UBPFnLib::SetViewMode(EViewModeIndex ViewMode) {
	ApplyViewMode(ViewMode, false, GEngine->GameViewport->EngineShowFlags);
	GEngine->GameViewport->ViewModeIndex = ViewMode;
}