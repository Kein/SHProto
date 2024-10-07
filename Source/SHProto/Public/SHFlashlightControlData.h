#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHFlashlightControlData.generated.h"

class UTextureLightProfile;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHFlashlightControlData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideLightsColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor LightsColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideMainLightAttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainLightAttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideMainLightIntensityMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainLightIntensityMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideMainLightInnerConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainLightInnerConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideMainLightOuterConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainLightOuterConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideMainLightIndirectLightingIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MainLightIndirectLightingIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideMainLightIESTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureLightProfile* MainLightIESTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideCloseLightIntensityMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloseLightIntensityMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideBackLightIntensityMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BackLightIntensityMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideLightshaftMaterial0EdgeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LightshaftMaterial0EdgeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideLightshaftMaterial0TintEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LightshaftMaterial0TintEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideLightshaftMaterial1EdgeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LightshaftMaterial1EdgeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideLightshaftMaterial1TintEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LightshaftMaterial1TintEmission;
    
    FSHFlashlightControlData();
};

