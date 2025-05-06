#include "CharacterBase.h"

ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
    // PrimaryActorTick.bStartWithTickEnabled = true;
    // PrimaryActorTick.TickInterval = 0.0f;  // 틱 간격(초)

    AttackCheckSphereArea = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    AttackCheckSphereArea->SetupAttachment(RootComponent);

	currentHealth = MaxHealth;
    isAlive = true;
}

void ACharacterBase::BeginPlay()
{
    Super::BeginPlay();

    AttackCheckSphereArea->OnComponentBeginOverlap.AddDynamic(this, &ACharacterBase::OnAttackRangeBeginOverlap);
}

void ACharacterBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ACharacterBase::OnAttackRangeBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    UE_LOG(LogTemp, Warning, TEXT("-================"));

    // // overlapActor.Add(*OtherActor);
    // // UE_LOG(LogTemp, Warning, TEXT("set count %d "),overlapActor.Num());
    // 
    // overlapActorMap.Add(1, OtherActor);
    // UE_LOG(LogTemp, Warning, TEXT("map count count %d "), overlapActorMap.Num());

}
