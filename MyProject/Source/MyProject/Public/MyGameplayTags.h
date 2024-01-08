// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MyGameplayTags.h"

/**
 * 
 */

struct FMyGameplayTags{

public:
	static FMyGameplayTags& Get();
	static void InitializeNativeGameplayTags();

	FGameplayTag InputTag_RMB;

	FGameplayTag Effects_HitReact;
private:
	static FMyGameplayTags GameplayTags;
};
