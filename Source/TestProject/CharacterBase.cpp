#include "CharacterBase.h"

ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	currentHealth = MaxHealth;
}

void ACharacterBase::BeginPlay()
{
}

void ACharacterBase::Tick(float DeltaTime)
{
}
