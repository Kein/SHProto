#pragma once
#include "CoreMinimal.h"
#include "SHPostprocessWindDataOverride.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct POSTPROCESSVOLUMEEX_API FSHPostprocessWindDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_BarkWindIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_BarkWindScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LeafsWindIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LeafsWindScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_WindDirection;
    
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
    
    FSHPostprocessWindDataOverride();
};

