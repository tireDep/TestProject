#include "RespawnInstanceSubsystem.h"

void URespawnInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{

}

void URespawnInstanceSubsystem::Deinitialize()
{

}

void URespawnInstanceSubsystem::LoadDataTable_EnemyData(UDataTable* dataTable)
{
	if (dataTable == nullptr)
	{
		return;
	}

	// 람다식
	dataTable->ForeachRow<FEnemyData>
		(TEXT("EnemyLoader"),[this](const FName& Key, const FEnemyData& Value)
			{
				enemyDataCache.Add(Key, Value);
			}
		);
}

const FEnemyData* URespawnInstanceSubsystem::GetEnemyData(FName enemyName)
{
	return enemyDataCache.Find(enemyName);
}

void URespawnInstanceSubsystem::InitializedEnemyObjectPool(int poolSize, TSubclassOf<AEnemyBase> enemyClass)
{
	cachedEnemyClass = enemyClass;

	for (int index = 0; index < poolSize; index++)
	{
		AEnemyBase* newEnemy = GetWorld()->SpawnActor<AEnemyBase>(cachedEnemyClass, FVector::ZeroVector, FRotator::ZeroRotator);
		if (newEnemy == nullptr)
		{
			continue;
		}

		newEnemy->SetActorHiddenInGame(true);
		newEnemy->SetActorEnableCollision(false);

		// if (enemyObjectPool.Contains(newEnemy->GetEnemyLevel()) == false)
		// {
		// 	enemyObjectPool.Add(newEnemy->GetEnemyLevel(), TArray<AEnemyBase*>());
		// }
		// 
		// enemyObjectPool[newEnemy->GetEnemyLevel()].Add(newEnemy);

		// enemyObjectPool.Add(newEnemy);
	}
}
