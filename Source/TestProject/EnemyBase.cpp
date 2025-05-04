#include "EnemyBase.h"

AEnemyBase::AEnemyBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();

	InitEnemyData("Basic");
}

void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemyBase::InitEnemyData(FName enemyID)
{
	if (enemyDataTable == nullptr)
	{
		return;
	}

	FEnemyStruct* data = enemyDataTable->FindRow<FEnemyStruct>(enemyID, TEXT("DT_Enemy"));
	if (data == nullptr)
	{
		return;
	}

	MaxHealth = data->maxHp;
	UE_LOG(LogTemp, Warning, TEXT("maxHealth : %f"), MaxHealth);
}
