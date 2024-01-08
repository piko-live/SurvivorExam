// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MyPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "AbilitySystem/MyAttributeSet.h"

AMyPlayerState::AMyPlayerState()
{
    AbilitySystemComponent = CreateDefaultSubobject<UMyAbilitySystemComponent>("Ability System Component");
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

    AttributeSet = CreateDefaultSubobject<UMyAttributeSet>("AttributeSet");

    NetUpdateFrequency = 100.f;
}

UAbilitySystemComponent *AMyPlayerState::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

UAttributeSet *AMyPlayerState::GetAttributeSet()
{
    return AttributeSet;
}
