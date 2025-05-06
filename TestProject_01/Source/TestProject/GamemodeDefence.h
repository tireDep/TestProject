// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include"RespawnInstanceSubsystem.h"

#include "GamemodeDefence.generated.h"

UCLASS()
class TESTPROJECT_API AGamemodeDefence : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGamemodeDefence();

protected:
	virtual void BeginPlay() override;
	void LoadDataTable();

public:
	// virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditDefaultsOnly, Category = "RespawnSubsystemData")
	UDataTable* enemyDataTable;

	UPROPERTY(EditDefaultsOnly, Category = "RespawnSubsystemData")
	int objectPoolSize = 100;
};
