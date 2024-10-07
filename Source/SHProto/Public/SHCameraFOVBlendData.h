#pragma once
#include "CoreMinimal.h"
#include "SHBlendData.h"
#include "SHCameraFOVBlendData.generated.h"

USTRUCT(BlueprintType)
struct FSHCameraFOVBlendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHBlendData BlendData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOVValue;
    
    SHPROTO_API FSHCameraFOVBlendData();
};

