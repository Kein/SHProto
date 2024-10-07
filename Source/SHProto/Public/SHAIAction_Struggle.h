#pragma once
#include "CoreMinimal.h"
#include "SHAIAction_Sync.h"
#include "SHAIAction_Struggle.generated.h"

class USHStruggleCmbSubcomp;

UCLASS(EditInlineNew)
class USHAIAction_Struggle : public USHAIAction_Sync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _LoopCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _DecayPerSecond;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _PointsPerClick;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _PointsPerHoldSecond;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    uint8 _LoopsToDo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    USHStruggleCmbSubcomp* _StruggleSubcomp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    bool _Escaped;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    bool _IsInLoop;
    
    USHAIAction_Struggle();

};

