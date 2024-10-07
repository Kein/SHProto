#pragma once
#include "CoreMinimal.h"
#include "SHRangedAutoAimConfigurationData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHRangedAutoAimConfigurationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinInputValueToDisableMagnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InfluenceRadiusAsExtentMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoAimInputBaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* RadiusDistanceStrengthMappingCurve;
    
    FSHRangedAutoAimConfigurationData();
};

