#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHPostprocessMagicLightData.generated.h"

USTRUCT(BlueprintType)
struct FSHPostprocessMagicLightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Exponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LuminanceLERP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LuminanceMAX;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessMagicLightData();
};

