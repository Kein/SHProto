#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SHAnimNState_PHMovePlayRate.generated.h"

class UCurveFloat;

UCLASS(CollapseCategories, EditInlineNew)
class SHPROTO_API USHAnimNState_PHMovePlayRate : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* PlayRateCurve;
    
    USHAnimNState_PHMovePlayRate();

};

