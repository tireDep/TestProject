// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "MyPlayer.generated.h"

UCLASS()
class TESTPROJECT_API AMyPlayer : public ACharacterBase
{
	GENERATED_BODY()

public:
	AMyPlayer();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
