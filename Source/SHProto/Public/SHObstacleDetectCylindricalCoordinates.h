#pragma once
#include "CoreMinimal.h"
#include "SHObstacleDetectCylindricalCoordinates.generated.h"

USTRUCT(BlueprintType)
struct FSHObstacleDetectCylindricalCoordinates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Angle;
    
    UPROPERTY(BlueprintReadOnly)
    float Distance;
    
    UPROPERTY(BlueprintReadOnly)
    float Height;
    
    SHPROTO_API FSHObstacleDetectCylindricalCoordinates();
};

