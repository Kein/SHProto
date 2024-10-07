#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHBlendData.h"
#include "SHFlashlightMainLightOffsetBlendData.generated.h"

USTRUCT(BlueprintType)
struct FSHFlashlightMainLightOffsetBlendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHBlendData BlendData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MainLightOffsetValue;
    
    SHPROTO_API FSHFlashlightMainLightOffsetBlendData();
};

