#pragma once

#include "CoreMinimal.h"
#include "CharacterBase.h"
#include "EnemyData.h"
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

	void InitEnemyData(FName enemyID);

private:
	UPROPERTY(EditDefaultsOnly, Category = "EnemySetting")
	UDataTable* enemyDataTable;
};
