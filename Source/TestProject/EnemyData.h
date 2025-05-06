#pragma once

#include "CoreMinimal.h"
#include "EnemyData.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FEnemyData : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName enemyName = "Default";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int level = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxHp = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float moveSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AttackAnimName = "";
};