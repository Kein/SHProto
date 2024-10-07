#pragma once
#include "CoreMinimal.h"
#include "SHBlendData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSHBlendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* BlendInAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* BlendOutAlphaCurve;
    
    SHPROTO_API FSHBlendData();
};

