#pragma once
#include "CoreMinimal.h"
#include "SHPOVDetectorProximityPoints.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FSHPOVDetectorProximityPoints {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<USceneComponent*> Points;
    
    SHPROTO_API FSHPOVDetectorProximityPoints();
};

