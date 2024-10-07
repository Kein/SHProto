#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "SHPostprocessColorGradingOverride.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct POSTPROCESSVOLUMEEX_API FSHPostprocessColorGradingOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_TemperatureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_WhiteTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_WhiteTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorSaturationShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorContrastShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGammaShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGainShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorOffsetShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorSaturationMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorContrastMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGammaMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGainMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorOffsetMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorSaturationHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorContrastHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGammaHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGainHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorOffsetHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorCorrectionHighlightsMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorCorrectionShadowsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_BlueCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ExpandGamut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ToneCurveAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_SceneColorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGradingIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ColorGradingLUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TEnumAsByte<ETemperatureMethod> TemperatureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WhiteTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WhiteTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorSaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorSaturationShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorContrastShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGammaShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGainShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorOffsetShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorSaturationMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorContrastMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGammaMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGainMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorOffsetMidtones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorSaturationHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorContrastHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGammaHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorGainHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 ColorOffsetHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ColorCorrectionHighlightsMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ColorCorrectionShadowsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlueCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ExpandGamut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ToneCurveAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor SceneColorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ColorGradingIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* ColorGradingLUT;
    
    FSHPostprocessColorGradingOverride();
};

