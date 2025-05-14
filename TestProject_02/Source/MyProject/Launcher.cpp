#include "Launcher.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"

ALauncher::ALauncher()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALauncher::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
}

void ALauncher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALauncher::LaunchPlayer()
{
	if (PlayerCharacter == nullptr)
	{
		return;
	}


}

