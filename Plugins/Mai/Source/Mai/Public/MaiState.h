#pragma once
#include "CoreMinimal.h"
#include "BeingState.h"
#include "MaiState.generated.h"

class AAIController;
class ACharacter;

UCLASS(EditInlineNew)
class MAI_API UMaiState : public UBeingState {
    GENERATED_BODY()
public:
    UMaiState();

    UFUNCTION(BlueprintPure)
    ACharacter* GetOwnerCH() const;
    
    UFUNCTION(BlueprintPure)
    AAIController* GetOwnerAI() const;
    
};

