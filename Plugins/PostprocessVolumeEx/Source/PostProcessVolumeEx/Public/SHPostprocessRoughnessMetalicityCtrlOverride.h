#pragma once
#include "CoreMinimal.h"
#include "EAtmosphereMood.h"
#include "SHPostprocessRoughnessMetalicityCtrlOverride.generated.h"

USTRUCT(BlueprintType)
struct POSTPROCESSVOLUMEEX_API FSHPostprocessRoughnessMetalicityCtrlOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Mood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RoughnessScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RoughnessBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RoughnessTerrainScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RoughnessTerrainBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_MetallicityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_MetallicityBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_MetallicityTerrainScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_MetallicityTerrainBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RaytracingCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RaytracingCullEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LumenReflectionsDownsampleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LumenReflectionsDownsampleFactorHQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_MaxRoughnessToTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_EyeAdpTrnsInitialPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_EyeAdpTrnsTurningPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_EyeAdpTrnsPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_EyeAdpTrnsInfluence;
    
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
    
    FSHPostprocessRoughnessMetalicityCtrlOverride();
};

