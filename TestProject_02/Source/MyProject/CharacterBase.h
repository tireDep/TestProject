#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"



#include "CharacterBase.generated.h"

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
};
