#pragma once
#include "CoreMinimal.h"
#include "CurveWithScale.h"
#include "EnviroHitReactionSettings.h"
#include "EnviroFrontHitEventSettings.generated.h"

USTRUCT(BlueprintType)
struct FEnviroFrontHitEventSettings : public FEnviroHitReactionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForwardLeanMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCurveWithScale ForwardLeanAngleBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BackwardLeanMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCurveWithScale BackwardLeanAngleBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCharacterPushBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushBackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushBackSpeed;
    
    SHPROTO_API FEnviroFrontHitEventSettings();
};

