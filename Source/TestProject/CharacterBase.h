// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "CharacterBase.generated.h"

UCLASS()
class TESTPROJECT_API ACharacterBase : public APaperZDCharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Status")
	float MaxHealth = 100.0f;

	float currentHealth;

public:
	ACharacterBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
