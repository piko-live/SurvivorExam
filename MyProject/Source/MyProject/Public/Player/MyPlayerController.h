// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTagContainer.h"
#include "MyPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
class UMyAbilitySystemComponent;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMyPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> Context;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> AbilityInput;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveInput;

	void AbilityInputTagHeld(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);

	void Move(const FInputActionValue& InputActionValue);

	TObjectPtr<UMyAbilitySystemComponent> MyAbilitySystemComponent;
	UMyAbilitySystemComponent* GetASC();
};
