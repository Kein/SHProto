#pragma once
#include "CoreMinimal.h"
#include "SHPostprocessWindData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSHPostprocessWindData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BarkWindIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* BarkWindIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BarkWindScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LeafsWindIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* LeafsWindIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LeafsWindScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WindDirection;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessWindData();
};

