#pragma once
#include "CoreMinimal.h"
#include "DaiContext.h"
#include "FlowAction.h"
#include "StopAnimationFA.generated.h"

UCLASS(EditInlineNew)
class UStopAnimationFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Performer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _ComponentTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _SlotName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _BlendOutTime;
    
    UStopAnimationFA();

};

