#pragma once
#include "CoreMinimal.h"
#include "SHFlashlightLookAtSettings.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHFlashlightLookAtSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bKeepFollow;
    
    UPROPERTY(BlueprintReadWrite)
    bool bMaintainSocketHeightToOffset;
    
    UPROPERTY(BlueprintReadWrite)
    float RotatonInterpSpeed;
    
    FSHFlashlightLookAtSettings();
};

