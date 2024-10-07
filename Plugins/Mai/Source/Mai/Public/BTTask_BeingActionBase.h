#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EBeingActionEventType.h"
#include "BTTask_BeingActionBase.generated.h"

class UBeingAction;

UCLASS(Abstract)
class MAI_API UBTTask_BeingActionBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_BeingActionBase();

protected:
    UFUNCTION()
    void OnActionEvent(UBeingAction* action, EBeingActionEventType EventType);

};

