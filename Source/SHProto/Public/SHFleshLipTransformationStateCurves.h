#pragma once
#include "CoreMinimal.h"
#include "SimpleBentCurve.h"
#include "SHFleshLipTransformationStateCurves.generated.h"

USTRUCT(BlueprintType)
struct FSHFleshLipTransformationStateCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSimpleBentCurve HeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSimpleBentCurve RotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSimpleBentCurve CeilingAvoidCurveAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSimpleBentCurve CeilingAvoidCurveBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CeilingPassRadiusScale;
    
    SHPROTO_API FSHFleshLipTransformationStateCurves();
};

