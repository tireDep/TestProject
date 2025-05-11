#include "LaunchGamemode.h"

ALaunchGamemode::ALaunchGamemode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALaunchGamemode::BeginPlay()
{
	Super::BeginPlay();
}

void ALaunchGamemode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
