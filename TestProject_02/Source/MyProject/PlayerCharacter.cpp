#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ApplyStrongPush(FVector::ForwardVector, 100000.0f);	// test
}

void APlayerCharacter::ApplyStrongPush(FVector direction, float impulseStrength)
{
	UCharacterMovementComponent* movementComp = GetCharacterMovement();
	if (movementComp == nullptr)
	{
		return;
	}

	FVector normalizedDirection = direction.GetSafeNormal2D();

	movementComp->AddImpulse(normalizedDirection * impulseStrength);
}

