#pragma once
#include "CoreMinimal.h"
#include "BeingStates.generated.h"

class UBeingState;

USTRUCT(BlueprintType)
struct BEING_API FBeingStates {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UBeingState*> _List;
    
    FBeingStates();
};

