#pragma once
#include "CoreMinimal.h"
#include "DaiNotify.h"
#include "PushBeingActionNotify.generated.h"

class UBeingAction;

UCLASS(EditInlineNew)
class MAI_API UPushBeingActionNotify : public UDaiNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UBeingAction* _Action;
    
    UPushBeingActionNotify();

};

