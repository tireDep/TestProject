// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayer.h"

AMyPlayer::AMyPlayer()
{
	AttackCheckSphereArea = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	AttackCheckSphereArea->SetupAttachment(RootComponent);
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

	// UE_LOG(LogTemp, Warning, TEXT("-================"));
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
