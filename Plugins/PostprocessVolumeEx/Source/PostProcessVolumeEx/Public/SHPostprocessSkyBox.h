#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHPostprocessSkyBoxInterpolator.h"
#include "SHPostprocessSkyBox.generated.h"

class UTexture;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSHPostprocessSkyBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use2DClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseAtmosphericSky;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudsDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector4 CloudsRotationFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D CloudsWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Clouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CloudsAmbient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CloudsDiffuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* Cubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRScaleOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AnimateCubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CubemapWrapDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CubemapWrapStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CubemapDisplaceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SkyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HorizonColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HorizonBottomColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HorizonFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseMoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* MoonTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor MoonColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector4 MoonPositionAndSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseStars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StarsIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SkyLightDirectionFromDirectional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SkylightDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SunBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SunColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SunHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SunRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SunRimHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SunRimRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkyBoxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SkyBoxCutOutReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SkyBoxCutOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkyBoxCutOutSmooth;
    
    UPROPERTY(Transient)
    TArray<FSHPostprocessSkyBoxInterpolator> Interpolators;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessSkyBox();
};

