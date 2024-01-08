// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MyAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "MyGameplayTags.h"
#include "GameplayEffectExtension.h"

void UMyAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME_CONDITION_NOTIFY(UMyAttributeSet, Health, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UMyAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}

void UMyAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData &Data)
{
    Super::PostGameplayEffectExecute(Data);

    if(Data.EvaluatedData.Attribute == GetHealthAttribute()){
        DoHitRect(Data);
    }

    if(Data.EvaluatedData.Attribute == GetIncomingDamageAttribute()){
        DoHitRect(Data);
    }
}

void UMyAttributeSet::OnRep_Health(const FGameplayAttributeData &OldValue) const
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UMyAttributeSet, Health, OldValue);
}

void UMyAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData &OldValue) const
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UMyAttributeSet, MaxHealth, OldValue);
}

void UMyAttributeSet::DoHitRect(const FGameplayEffectModCallbackData &Data)
{
    AActor* TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
    UAbilitySystemComponent* TargetActorComponent = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
    
    FGameplayTagContainer TagContainer;
    TagContainer.AddTag(FMyGameplayTags::Get().Effects_HitReact);
    TargetActorComponent->TryActivateAbilitiesByTag(TagContainer);
}