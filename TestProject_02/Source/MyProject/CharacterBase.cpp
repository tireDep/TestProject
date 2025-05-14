#include "CharacterBase.h"
#include "Components/SphereComponent.h"

ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
	// UE_LOG(LogTemp, Warning, TEXT("-================"));

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("AttackRangeCollider"));
	SphereComp->SetupAttachment(RootComponent);
	SphereComp->SetGenerateOverlapEvents(true);
}

ACharacterBase::~ACharacterBase()
{
}

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();

	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ACharacterBase::OnAttackRangeOverlapBegin);
	SphereComp->OnComponentEndOverlap.AddDynamic(this, &ACharacterBase::OnAttackRangeOverlapEnd);
}

void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACharacterBase::OnAttackRangeOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("OnAttackRangeOverlapBegin"));

	OnOverlapEvent.Broadcast(OtherActor);
}

void ACharacterBase::OnAttackRangeOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("OnAttackRangeOverlapEnd"));
}
