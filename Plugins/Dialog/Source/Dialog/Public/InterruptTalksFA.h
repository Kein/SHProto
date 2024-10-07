#pragma once
#include "CoreMinimal.h"
#include "FlowAction.h"
#include "InterruptTalksFA.generated.h"

UCLASS(EditInlineNew)
class UInterruptTalksFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _Priority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _ExcludeCaller;
    
    UInterruptTalksFA();

};

