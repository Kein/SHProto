#pragma once
#include "CoreMinimal.h"
#include "MaiWallNavSegment.generated.h"

USTRUCT()
struct MAI_API FMaiWallNavSegment {
    GENERATED_BODY()
public:
    UPROPERTY()
    int16 _PointLeftIdx;
    
    UPROPERTY()
    int16 _PointRightIdx;
    
    UPROPERTY()
    int8 _Surface;
    
    FMaiWallNavSegment();
};

