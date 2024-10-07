#pragma once
#include "CoreMinimal.h"
#include "SHSlideDataStruct.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSHSlideDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* AlphaModCurve;
    
    SHPROTO_API FSHSlideDataStruct();
};

