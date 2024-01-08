// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MyEnemyCharacter.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "AbilitySystem/MyAttributeSet.h"

AMyEnemyCharacter::AMyEnemyCharacter(){
    AbilitySystemComponent = CreateDefaultSubobject<UMyAbilitySystemComponent>("Ability System Component");
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

    AttributeSet = CreateDefaultSubobject<UMyAttributeSet>("AttributeSet");
}

void AMyEnemyCharacter::BeginPlay()
{
    Super::BeginPlay();

    InitAbilityActorInfo();
    AddCharacterAbilities();

    UMyAttributeSet *MyAttributeSet = Cast<UMyAttributeSet>(AttributeSet);
    UE_LOG(LogTemp, Display, TEXT("Enemy Health: %f"), MyAttributeSet->GetHealth());
}

void AMyEnemyCharacter::InitAbilityActorInfo()
{
    AbilitySystemComponent->InitAbilityActorInfo(this, this);

    ApplyEffectToSelf(DefaultPrimaryAttributes, 1.0f);
    ApplyEffectToSelf(DefaultVitalAttributes, 1.0f);
}
