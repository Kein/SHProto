#pragma once
#include "CoreMinimal.h"
#include "MaiWallNavBorder.generated.h"

USTRUCT()
struct MAI_API FMaiWallNavBorder {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint16 _PolyIdx;
    
    UPROPERTY()
    uint8 _PolyEdge;
    
    FMaiWallNavBorder();
};

