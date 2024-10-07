#pragma once
#include "CoreMinimal.h"
#include "ESHObstaclesDetectType.h"
#include "SHObstacleDetectMovementData.generated.h"

USTRUCT(BlueprintType)
struct FSHObstacleDetectMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SideCheckDistanceAdd;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HeightCheck;
    
    UPROPERTY(BlueprintReadOnly)
    float AdditionalRotation;
    
    UPROPERTY(BlueprintReadOnly)
    ESHObstaclesDetectType BlockMovementType;
    
    SHPROTO_API FSHObstacleDetectMovementData();
};

