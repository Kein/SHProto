#pragma once
#include "CoreMinimal.h"
#include "SHCameraBlendableEffect.generated.h"

class UCurveFloat;
class USHOperationEvents;

USTRUCT()
struct FSHCameraBlendableEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    USHOperationEvents* OperationEvents;
    
    UPROPERTY(Transient)
    UCurveFloat* EaseCurve;
    
public:
    SHPROTO_API FSHCameraBlendableEffect();
};

