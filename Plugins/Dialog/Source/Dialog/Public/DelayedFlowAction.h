#pragma once
#include "CoreMinimal.h"
#include "DelayedFlowAction.generated.h"

class UActorComponent;
class UFlowAction;

USTRUCT(BlueprintType)
struct FDelayedFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UFlowAction* _Action;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float _WaitForCall;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UActorComponent* _Caller;
    
    DIALOG_API FDelayedFlowAction();
};

