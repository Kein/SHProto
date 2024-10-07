#pragma once
#include "CoreMinimal.h"
#include "FlowAction.h"
#include "CallNotifyFA.generated.h"

class UDaiNotify;

UCLASS(EditInlineNew)
class UCallNotifyFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UDaiNotify* _Notify;
    
    UCallNotifyFA();

};

