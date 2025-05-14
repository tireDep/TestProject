#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"

#include "CharacterBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverlapSignature, AActor*, OtherActor);

UCLASS()
class MYPROJECT_API ACharacterBase : public APaperZDCharacter
{
	GENERATED_BODY()
	
public:
	ACharacterBase();
	virtual ~ACharacterBase();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, Category = "Attack")
	class USphereComponent* SphereComp;

	UPROPERTY(BlueprintAssignable)
	FOnOverlapSignature OnOverlapEvent;

	// UFUNCTION(BlueprintCallable, Category = "AttackAnimation")
	UFUNCTION()
	void OnAttackRangeOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnAttackRangeOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
