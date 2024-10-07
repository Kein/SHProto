#pragma once
#include "CoreMinimal.h"
#include "SHMariaLightingControlData.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHMariaLightingControlData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideIntensityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntensityValue;
    
    FSHMariaLightingControlData();
};

