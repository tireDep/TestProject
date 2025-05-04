// Fill out your copyright notice in the Description page of Project Settings.


#include "GamemodeDefence.h"

AGamemodeDefence::AGamemodeDefence()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AGamemodeDefence::BeginPlay()
{
	Super::BeginPlay();
	LoadDataTable();
}

void AGamemodeDefence::LoadDataTable()
{
	URespawnInstanceSubsystem* respawnSystem = GetGameInstance()->GetSubsystem<URespawnInstanceSubsystem>();
	if (respawnSystem != nullptr && enemyDataTable != nullptr)
	{
		respawnSystem->LoadDataTable_EnemyData(enemyDataTable);
	}
}
