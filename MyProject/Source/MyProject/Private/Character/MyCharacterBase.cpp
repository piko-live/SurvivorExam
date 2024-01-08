// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MyCharacterBase.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"

AMyCharacterBase::AMyCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

}

UAbilitySystemComponent *AMyCharacterBase::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

void AMyCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void AMyCharacterBase::InitAbilityActorInfo()
{
	
}

UAttributeSet *AMyCharacterBase::GetAttributeSet()
{
   	return AttributeSet;
}

void AMyCharacterBase::ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level)
{
	FGameplayEffectContextHandle ContextHandle = GetAbilitySystemComponent()->MakeEffectContext();
	ContextHandle.AddSourceObject(this);
	FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(GameplayEffectClass, Level, ContextHandle);
	GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), GetAbilitySystemComponent());
}

void AMyCharacterBase::AddCharacterAbilities()
{

}
