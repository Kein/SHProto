#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Character.h"
#include "SHCharacter.generated.h"

UCLASS(Abstract)
class ASHCharacter : public ACharacter, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    ASHCharacter(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

