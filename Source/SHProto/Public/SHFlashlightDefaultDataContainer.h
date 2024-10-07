#pragma once
#include "CoreMinimal.h"
#include "SHFlashlightDefaultDataContainer.generated.h"

class UTextureLightProfile;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHFlashlightDefaultDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UTextureLightProfile* MainLightIESTexture;
    
    FSHFlashlightDefaultDataContainer();
};

