// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/MyCharacterBase.h"
#include "MyPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyPlayerCharacter : public AMyCharacterBase
{
	GENERATED_BODY()

public:
	AMyPlayerCharacter();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void BeginPlay() override;

private:
	virtual void InitAbilityActorInfo() override;
};
