#pragma once
#include "CoreMinimal.h"
#include "CurveWithScale.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FCurveWithScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* LeanInTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeCurveScale;
    
    SHPROTO_API FCurveWithScale();
};

