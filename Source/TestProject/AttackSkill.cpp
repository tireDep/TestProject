// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackSkill.h"

// Sets default values
AAttackSkill::AAttackSkill()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAttackSkill::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAttackSkill::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

