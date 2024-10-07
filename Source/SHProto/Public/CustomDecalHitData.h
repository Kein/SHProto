#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomDecalHitData.generated.h"

USTRUCT()
struct FCustomDecalHitData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector ImpactPoint;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    float ALPHA;
    
    UPROPERTY()
    int32 FrameIndex;
    
    SHPROTO_API FCustomDecalHitData();
};

