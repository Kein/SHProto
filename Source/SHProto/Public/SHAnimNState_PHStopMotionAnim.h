#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHAnimNState_PHStopMotionAnim.generated.h"

class UCurveFloat;

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNState_PHStopMotionAnim : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StopMotionAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* StopMotionAlphaCurve;
    
    USHAnimNState_PHStopMotionAnim();

};

