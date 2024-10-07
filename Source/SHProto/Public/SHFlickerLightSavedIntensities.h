#pragma once
#include "CoreMinimal.h"
#include "SHFlickerLightSavedIntensities.generated.h"

USTRUCT(BlueprintType)
struct FSHFlickerLightSavedIntensities {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName ComponentName;
    
    UPROPERTY(VisibleAnywhere)
    float BaseIntensity;
    
    SHPROTO_API FSHFlickerLightSavedIntensities();
};

