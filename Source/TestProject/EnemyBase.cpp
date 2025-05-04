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
	URespawnInstanceSubsystem* respawnSystem = GetGameInstance()->GetSubsystem<URespawnInstanceSubsystem>();
	if (respawnSystem == nullptr)
	{
		return;
	}

	const FEnemyData* enemyData = respawnSystem->GetEnemyData("Basic");
	if (enemyData == nullptr)
	{
		return;
	}

	MaxHealth = enemyData->maxHp;
	UE_LOG(LogTemp, Warning, TEXT("maxHealth : %f"), MaxHealth);
}
