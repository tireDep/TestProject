#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "EnemyData.h"
// #include "RespawnInstanceSubsystem.h"
#include "EnemyBase.generated.h"

UCLASS()
class TESTPROJECT_API AEnemyBase : public ACharacterBase
{
	GENERATED_BODY()
	
public:
	AEnemyBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void InitializeData(FName enemyID);
	void ResetData() { GetWorldTimerManager().ClearAllTimersForObject(this); }	// 상태 초기화

	const int GetEnemyLevel() { return level; }

	// void SetActive(bool setValue) { isActive = setValue; }
	// bool GetActive() { return isActive; };

private:
	FName enemyName;
	int level;
	float maxHp;
	float moveSpeed;
	FName AttackAnimName;
};
