// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MyPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "MyGameplayTags.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"

AMyPlayerController::AMyPlayerController()
{
    bReplicates = true;
}

void AMyPlayerController::BeginPlay()
{
    Super::BeginPlay();

    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
    if(Subsystem){
        Subsystem->AddMappingContext(Context, 0);
    }

    FInputModeGameAndUI InputModeData;
    InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
    InputModeData.SetHideCursorDuringCapture(false);
    SetInputMode(InputModeData);
}

void AMyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

    //新增Move綁定

    FMyGameplayTags GameplayTags = FMyGameplayTags::Get();
    EnhancedInputComponent->BindAction(AbilityInput, ETriggerEvent::Triggered, this, &AMyPlayerController::AbilityInputTagHeld, GameplayTags.InputTag_RMB);
    EnhancedInputComponent->BindAction(AbilityInput, ETriggerEvent::Completed, this, &AMyPlayerController::AbilityInputTagReleased, GameplayTags.InputTag_RMB);
}

void AMyPlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
    UE_LOG(LogTemp, Display, TEXT("AbilityInputTagHeld"));

    if(GetASC()){
        MyAbilitySystemComponent->AbilityInputTagHeld(InputTag);
    }
}

void AMyPlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
    UE_LOG(LogTemp, Display, TEXT("AbilityInputReleased"));

    if(GetASC()){
       MyAbilitySystemComponent->AbilityInputTagReleased(InputTag);
    }
}

UMyAbilitySystemComponent *AMyPlayerController::GetASC()
{
    if(MyAbilitySystemComponent == nullptr){
        MyAbilitySystemComponent = Cast<UMyAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
    }

    return MyAbilitySystemComponent;
}