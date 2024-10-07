#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHPostprocessEpicClouds.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSHPostprocessEpicClouds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseNoiseExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseNoiseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeerPowder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeerPowderPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ErosionExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ErosionMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ErosionMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ErosionNoiseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ErosionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ErosionStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExtinctionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiScatteringContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiScatteringEccentricity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiScatteringOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseHeightExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseHeightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhaseBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhaseG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PhaseG2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeatherUVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Albedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Emissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Extinction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor WindVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* WeatherTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeatherTextureRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* GradientTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseCloudsGizmos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor NoiseModScale;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessEpicClouds();
};

