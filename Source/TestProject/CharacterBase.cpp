#include "CharacterBase.h"

ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
    // PrimaryActorTick.bStartWithTickEnabled = true;
    // PrimaryActorTick.TickInterval = 0.0f;  // 틱 간격(초)

	currentHealth = MaxHealth;
}

void ACharacterBase::BeginPlay()
{
    Super::BeginPlay();
}

void ACharacterBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
