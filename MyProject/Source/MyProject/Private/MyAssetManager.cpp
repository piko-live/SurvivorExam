// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAssetManager.h"
#include "MyGameplayTags.h"
#include "AbilitySystemGlobals.h"

UMyAssetManager &UMyAssetManager::Get()
{
    // TODO: insert return statement here
    UMyAssetManager* MyAssetManager = Cast<UMyAssetManager>(GEngine->AssetManager);

    return *MyAssetManager;
}

void UMyAssetManager::StartInitialLoading()
{
    Super::StartInitialLoading();

    FMyGameplayTags::InitializeNativeGameplayTags();
    UAbilitySystemGlobals::Get().InitGlobalData();
}
