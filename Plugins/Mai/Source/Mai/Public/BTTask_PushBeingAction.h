#pragma once
#include "CoreMinimal.h"
#include "BTTask_BeingActionBase.h"
#include "BTTask_PushBeingAction.generated.h"

class UBeingAction;

UCLASS()
class MAI_API UBTTask_PushBeingAction : public UBTTask_BeingActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UBeingAction* action;
    
public:
    UBTTask_PushBeingAction();

};

