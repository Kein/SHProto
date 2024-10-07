#pragma once
#include "CoreMinimal.h"
#include "EReticleColor.h"
#include "EReticleThickness.h"
#include "EReticleVisibility.h"
#include "ReticleData.generated.h"

USTRUCT(BlueprintType)
struct FReticleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EReticleVisibility Visibility;
    
    UPROPERTY(BlueprintReadOnly)
    EReticleThickness Thickness;
    
    UPROPERTY(BlueprintReadOnly)
    float Opacity;
    
    UPROPERTY(BlueprintReadOnly)
    EReticleColor Color;
    
    SHPROTO_API FReticleData();
};

