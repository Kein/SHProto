#pragma once
#include "CoreMinimal.h"
#include "SHRangedAutoAimWeaponConfigurationData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHRangedAutoAimWeaponConfigurationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* RangeToStrengthMappingCurve;
    
    FSHRangedAutoAimWeaponConfigurationData();
};

