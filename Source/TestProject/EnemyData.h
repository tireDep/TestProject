#pragma once

#include "CoreMinimal.h"
#include "EnemyData.generated.h"

// class TESTPROJECT_API FEnemyData
// {
// public:
// 	FEnemyData();
// 	~FEnemyData();
// };

USTRUCT(Atomic, BlueprintType)
struct FEnemyStruct : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxHp = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float moveSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AttackAnimName = "Default";
};
