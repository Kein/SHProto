#pragma once
#include "CoreMinimal.h"
#include "SHBlendData.h"
#include "SHCameraMAACRBlendData.generated.h"

USTRUCT(BlueprintType)
struct FSHCameraMAACRBlendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHBlendData BlendData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MAACRScaleValue;
    
    SHPROTO_API FSHCameraMAACRBlendData();
};

