#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Launcher.generated.h"

UCLASS()
class MYPROJECT_API ALauncher : public AActor
{
	GENERATED_BODY()
	
public:	
	ALauncher();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	void LaunchPlayer();

public:
	class APlayerCharacter* PlayerCharacter;

	UPROPERTY(EditAnywhere, Category = "Launcher")
	float MinPower = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Launcher")
	float MaxPower = 100.0f;
};
