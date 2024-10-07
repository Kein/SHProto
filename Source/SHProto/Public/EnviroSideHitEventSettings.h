#pragma once
#include "CoreMinimal.h"
#include "CurveWithScale.h"
#include "EnviroHitReactionSettings.h"
#include "EnviroSideHitEventSettings.generated.h"

USTRUCT(BlueprintType)
struct FEnviroSideHitEventSettings : public FEnviroHitReactionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RightYawMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LeftYawMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCurveWithScale AngleBlendCurve;
    
    SHPROTO_API FEnviroSideHitEventSettings();
};

