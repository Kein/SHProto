#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHPostprocessCloudscapeClouds.generated.h"

USTRUCT(BlueprintType)
struct FSHPostprocessCloudscapeClouds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor NoiseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor NoiseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CloudAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CloudExtinction;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessCloudscapeClouds();
};

