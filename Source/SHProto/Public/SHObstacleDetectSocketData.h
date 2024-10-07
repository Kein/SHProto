#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHObstacleDetectSocketData.generated.h"

USTRUCT(BlueprintType)
struct FSHObstacleDetectSocketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName IKBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneOffsetName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector CheckVector;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CheckRadius;
    
    SHPROTO_API FSHObstacleDetectSocketData();
};

