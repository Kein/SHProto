#pragma once
#include "CoreMinimal.h"
#include "BeingActions.generated.h"

class UBeingAction;

USTRUCT(BlueprintType)
struct BEING_API FBeingActions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UBeingAction*> _List;
    
    FBeingActions();
};

