#pragma once
#include "CoreMinimal.h"
#include "SHBlendData.h"
#include "SHCameraMAARLBlendData.generated.h"

USTRUCT(BlueprintType)
struct FSHCameraMAARLBlendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHBlendData BlendData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MAARLScaleValue;
    
    SHPROTO_API FSHCameraMAARLBlendData();
};

