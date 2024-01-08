// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MyPlayerCharacter.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/MyPlayerState.h"
#include "AbilitySystem/MyAttributeSet.h"

AMyPlayerCharacter::AMyPlayerCharacter(){
    GetCharacterMovement()->bOrientRotationToMovement = true;

    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;
}

void AMyPlayerCharacter::PossessedBy(AController *NewController)
{
    Super::PossessedBy(NewController);

    InitAbilityActorInfo();
    AddCharacterAbilities();
}

void AMyPlayerCharacter::OnRep_PlayerState()
{
    Super::OnRep_PlayerState();

    InitAbilityActorInfo();
}

void AMyPlayerCharacter::BeginPlay()
{
    Super::BeginPlay();

    UMyAttributeSet *MyAttributeSet = Cast<UMyAttributeSet>(AttributeSet);
    UE_LOG(LogTemp, Display, TEXT("Player Health: %f"), MyAttributeSet->GetHealth());
}

void AMyPlayerCharacter::InitAbilityActorInfo()
{
    if(AMyPlayerState* APlayerState = Cast<AMyPlayerState>(GetPlayerState())){
        UAbilitySystemComponent* AbilityCompoment = APlayerState->GetAbilitySystemComponent();

        AbilityCompoment->InitAbilityActorInfo(APlayerState, this);
        AbilitySystemComponent = AbilityCompoment;
        AttributeSet = APlayerState->GetAttributeSet();

        ApplyEffectToSelf(DefaultPrimaryAttributes, 1.0f);
        ApplyEffectToSelf(DefaultVitalAttributes, 1.0f);
    }
}
