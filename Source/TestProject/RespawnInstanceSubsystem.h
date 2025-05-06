#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "EnemyData.h"
#include "EnemyBase.h"

#include "RespawnInstanceSubsystem.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FEnemyPool : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<AEnemyBase*> Enemies;
};

UCLASS()
class TESTPROJECT_API URespawnInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void LoadDataTable_EnemyData(UDataTable* dataTable);

	const FEnemyData* GetEnemyData(FName enemyName);

	void InitializedEnemyObjectPool(int poolSize, TSubclassOf<AEnemyBase> enemyClass);

private:
	UPROPERTY()
	TMap<FName, FEnemyData> enemyDataCache;

	UPROPERTY()
	// TArray<AEnemyBase*> enemyObjectPool;
	// TMap<int, TArray<AEnemyBase*>> enemyObjectPool; // 언리얼 해당 형태 사용 불가
	TMap<int, FEnemyPool> enemyPoolMap;

	UPROPERTY()
	TSubclassOf<AEnemyBase> cachedEnemyClass;
};
