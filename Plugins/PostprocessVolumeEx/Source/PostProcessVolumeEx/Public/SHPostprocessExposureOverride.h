#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "SHPostprocessExposureOverride.generated.h"

class UCurveFloat;
class UTexture;

USTRUCT(BlueprintType)
struct POSTPROCESSVOLUMEEX_API FSHPostprocessExposureOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureApplyPhysicalCameraExposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureBiasCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureMeterMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureLowPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureHighPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureMinBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AutoExposureSpeedDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_HistogramLogMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_HistogramLogMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LocalExposureHighlightContrastScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LocalExposureShadowContrastScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LocalExposureDetailStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LocalExposureBlurredLuminanceBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LocalExposureBlurredLuminanceKernelSizePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LocalExposureMiddleGreyBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 AutoExposureApplyPhysicalCameraExposure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* AutoExposureBiasCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* AutoExposureMeterMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureLowPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureHighPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureMinBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureSpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoExposureSpeedDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float HistogramLogMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float HistogramLogMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LocalExposureHighlightContrastScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LocalExposureShadowContrastScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LocalExposureDetailStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LocalExposureBlurredLuminanceBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LocalExposureBlurredLuminanceKernelSizePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LocalExposureMiddleGreyBias;
    
    FSHPostprocessExposureOverride();
};

