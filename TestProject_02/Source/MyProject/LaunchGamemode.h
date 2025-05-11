#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LaunchGamemode.generated.h"

UCLASS()
class MYPROJECT_API ALaunchGamemode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ALaunchGamemode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
