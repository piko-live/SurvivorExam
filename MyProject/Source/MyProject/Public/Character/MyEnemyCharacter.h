// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/MyCharacterBase.h"
#include "MyEnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyEnemyCharacter : public AMyCharacterBase
{
	GENERATED_BODY()

public:
	AMyEnemyCharacter();

protected:
	virtual void BeginPlay() override;

private:
	virtual void InitAbilityActorInfo() override;
};
