// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/MyGameplayAbility.h"

void UMyAbilitySystemComponent::AbilityInputTagHeld(FGameplayTag InputTag)
{
    if(!InputTag.IsValid()){
        return;
    }

    //透過InputTag ActivateAbility
}

void UMyAbilitySystemComponent::AbilityInputTagReleased(FGameplayTag InputTag)
{
    if(!InputTag.IsValid()){
        return;
    }

}

void UMyAbilitySystemComponent::AddCharacterAbilities(TArray<TSubclassOf<UGameplayAbility>> StartupAbilities)
{
    //建立GameplayAbilitySpec 並設定DynamicAbilityTags
}
