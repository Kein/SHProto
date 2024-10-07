#pragma once
#include "CoreMinimal.h"
#include "MaiWallNavTriangle.generated.h"

USTRUCT()
struct MAI_API FMaiWallNavTriangle {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 _FirstLink;
    
    UPROPERTY()
    uint16 _PointIdx[3];
    
    UPROPERTY()
    uint16 _NeigsIdx[3];
    
    UPROPERTY()
    int8 _RegionIdx;
    
    UPROPERTY()
    uint8 _AreaType;
    
    UPROPERTY()
    uint16 _Flags;
    
    FMaiWallNavTriangle();
};

