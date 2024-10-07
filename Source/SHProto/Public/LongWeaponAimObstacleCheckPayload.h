#pragma once
#include "CoreMinimal.h"
#include "LongWeaponAimObstacleCheckPayload.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FLongWeaponAimObstacleCheckPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* WeaponStartSocketData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* WeaponEndSocketData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArmsAimOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArmsAimOffsetXRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArmsAimOffsetXRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowDebug;
    
    UPROPERTY()
    float ALPHA;
    
    UPROPERTY()
    float CurveTimeMin;
    
    UPROPERTY()
    float CurveTimeMax;
    
    SHPROTO_API FLongWeaponAimObstacleCheckPayload();
};

