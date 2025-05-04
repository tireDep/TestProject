#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "EnemyData.h"

#include "RespawnInstanceSubsystem.generated.h"

UCLASS()
class TESTPROJECT_API URespawnInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	TMap<FName, FEnemyData> enemyDataCache;

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void LoadDataTable_EnemyData(UDataTable* dataTable);

	const FEnemyData* GetEnemyData(FName enemyName);
};
