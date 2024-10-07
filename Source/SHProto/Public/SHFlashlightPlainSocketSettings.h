#pragma once
#include "CoreMinimal.h"
#include "SHFlashlightPlainSocketSettings.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHFlashlightPlainSocketSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float bBlendFromCurrentState;
    
    UPROPERTY(BlueprintReadWrite)
    float LocationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    float RotatonInterpSpeed;
    
    FSHFlashlightPlainSocketSettings();
};

