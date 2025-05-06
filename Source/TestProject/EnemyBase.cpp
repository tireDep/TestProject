#include "RespawnInstanceSubsystem.h"
#include "EnemyBase.h"

AEnemyBase::AEnemyBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// isActive = false;
}

void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();

	InitializeData("Basic");
}

void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemyBase::InitializeData(FName enemyID)
{
	URespawnInstanceSubsystem* respawnSystem = GetGameInstance()->GetSubsystem<URespawnInstanceSubsystem>();
	if (respawnSystem == nullptr)
	{
		return;
	}

	const FEnemyData* getEnemyData = respawnSystem->GetEnemyData("Basic");
	if (getEnemyData == nullptr)
	{
		return;
	}

	MaxHealth = getEnemyData->maxHp;
	UE_LOG(LogTemp, Warning, TEXT("maxHealth : %f"), MaxHealth);

	currentHealth = MaxHealth;
	isAlive = true;
}
