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
