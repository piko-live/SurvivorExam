// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/MyProjectile.h"
#include "Components/SphereComponent.h"
#include "Gameframework/ProjectileMovementComponent.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/MyAttributeSet.h"
#include "Character/MyCharacterBase.h"

AMyProjectile::AMyProjectile()
{
	PrimaryActorTick.bCanEverTick = false;

	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");
	SetRootComponent(Sphere);

	Sphere->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
	Sphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Sphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	Sphere->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
	Sphere->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Overlap);
	Sphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	ProjectileMovement->InitialSpeed = 1000.f;
	ProjectileMovement->MaxSpeed = ProjectileMovement->InitialSpeed;
	ProjectileMovement->ProjectileGravityScale = 0.0f;
}

void AMyProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	//請綁定Overlap事件
}

void AMyProjectile::OnSphereOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	// 套用 Damage GameplayEffect

	// 打印出當前血量 
	AMyCharacterBase* Character = Cast<AMyCharacterBase>(OtherActor);
	float health = Cast<UMyAttributeSet>(Character->GetAttributeSet())->GetHealth();
	UE_LOG(LogTemp, Display, TEXT("Hit: %f"), health);

	Destroy();
}
