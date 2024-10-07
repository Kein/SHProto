#pragma once
#include "CoreMinimal.h"
#include "EAtmosphereMood.h"
#include "SHPostprocessRoughnessMetalicityCtrl.generated.h"

USTRUCT(BlueprintType)
struct FSHPostprocessRoughnessMetalicityCtrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAtmosphereMood> Mood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RoughnessScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RoughnessBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RoughnessTerrainScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RoughnessTerrainBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MetallicityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MetallicityBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MetallicityTerrainScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MetallicityTerrainBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RaytracingCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool RaytracingCullEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 LumenReflectionsDownsampleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    int32 LumenReflectionsDownsampleFactorHQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MaxRoughnessToTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float EyeAdpTrnsInitialPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float EyeAdpTrnsTurningPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float EyeAdpTrnsPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float EyeAdpTrnsInfluence;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessRoughnessMetalicityCtrl();
};

