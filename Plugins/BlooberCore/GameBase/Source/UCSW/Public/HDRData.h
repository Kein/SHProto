#pragma once
#include "CoreMinimal.h"
#include "HDRData.generated.h"

USTRUCT(BlueprintType)
struct FHDRData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool HDR;
    
    UPROPERTY(BlueprintReadOnly)
    float HDRMinLuminance;
    
    UPROPERTY(BlueprintReadOnly)
    float HDRMidLuminance;
    
    UPROPERTY(BlueprintReadOnly)
    float HDRMaxLuminance;
    
    UPROPERTY(BlueprintReadOnly)
    float HDRBrightness;
    
    UPROPERTY(BlueprintReadOnly)
    float HDRUIBrightness;
    
    UPROPERTY(BlueprintReadOnly)
    float HDRUIContrast;
    
    UCSW_API FHDRData();
};

