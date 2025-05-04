// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"

#include "Components/SphereComponent.h"

#include "CharacterBase.generated.h"

UCLASS()
class TESTPROJECT_API ACharacterBase : public APaperZDCharacter
{
	GENERATED_BODY()

public:
	ACharacterBase();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnAttackRangeBeginOverlap(UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

protected:
	UPROPERTY(VisibleAnywhere, Category = "Attack")
	USphereComponent* AttackCheckSphereArea;

	TSet<AActor> overlapActor;
	TMap<int, AActor> overlapActorMap;

	UPROPERTY(VisibleAnywhere, Category = "Status")
	float MaxHealth;

	float currentHealth;
};
