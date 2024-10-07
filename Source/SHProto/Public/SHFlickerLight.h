#pragma once
#include "CoreMinimal.h"
#include "SHFlickerLight.generated.h"

class ULightComponent;

USTRUCT()
struct FSHFlickerLight {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    ULightComponent* Component;
    
    UPROPERTY()
    float BaseIntensity;
    
    UPROPERTY()
    float BaseTemperature;
    
    UPROPERTY()
    bool HasOffTag;
    
    SHPROTO_API FSHFlickerLight();
};

