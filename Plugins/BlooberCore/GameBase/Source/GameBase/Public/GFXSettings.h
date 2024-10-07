#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDynamicResolution.h"
#include "EFpsCap.h"
#include "EPanini.h"
#include "ERaytracing.h"
#include "EScreenMode.h"
#include "GFXQuality.h"
#include "SpecialGFXQuality.h"
#include "GFXSettings.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASE_API FGFXSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, int32> GsaOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GammaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool VSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EScreenMode ScreenMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MonitorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HDR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRMinLuminance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRMidLuminance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRMaxLuminance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRUIBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRUIContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    GFXQuality Quality;
    
    UPROPERTY()
    bool AdvQualityIsCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    SpecialGFXQuality SpecialQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFpsCap FpsCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERaytracing Raytracing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDynamicResolution DynRes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPanini Panini;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IngameMotionBlur;
    
    FGFXSettings();
};

