#pragma once
#include "CoreMinimal.h"
#include "RunningFlowAction.generated.h"

class UActorComponent;
class UFlowAction;

USTRUCT(BlueprintType)
struct FRunningFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UFlowAction* _Action;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UActorComponent* _Caller;
    
    DIALOG_API FRunningFlowAction();
};

