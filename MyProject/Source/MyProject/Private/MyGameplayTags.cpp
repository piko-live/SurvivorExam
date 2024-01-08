// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameplayTags.h"
#include "GameplayTagsManager.h"

FMyGameplayTags FMyGameplayTags::GameplayTags;

FMyGameplayTags &FMyGameplayTags::Get()
{
    // TODO: insert return statement here
    return GameplayTags;
}

void FMyGameplayTags::InitializeNativeGameplayTags()
{
    GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.RMB"), FString("滑鼠右鍵"));

    GameplayTags.Effects_HitReact = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Effects_HitReact"), FString("受傷"));
}
