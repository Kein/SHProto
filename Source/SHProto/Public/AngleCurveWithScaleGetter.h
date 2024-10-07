#pragma once
#include "CoreMinimal.h"
#include "CurveWithScale.h"
#include "AngleCurveWithScaleGetter.generated.h"

USTRUCT(BlueprintType)
struct FAngleCurveWithScaleGetter : public FCurveWithScale {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float CurrentCurveTime;
    
    UPROPERTY()
    float MaxAngle;
    
public:
    SHPROTO_API FAngleCurveWithScaleGetter();
};

