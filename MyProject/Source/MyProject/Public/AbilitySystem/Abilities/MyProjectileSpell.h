// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/MyGameplayAbility.h"
#include "MyProjectileSpell.generated.h"

class AMyProjectile;

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyProjectileSpell : public UMyGameplayAbility
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AMyProjectile> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UGameplayEffect> DamageEffectClass;

	UFUNCTION(BlueprintCallable)
	void SpawnProjectile();
};
