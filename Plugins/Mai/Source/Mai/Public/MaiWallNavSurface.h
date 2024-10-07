#pragma once
#include "CoreMinimal.h"
#include "MaiWallNavPoint.h"
#include "MaiWallNavTriangle.h"
#include "MaiWallNavSurface.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiWallNavSurface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMaiWallNavPoint> _NavVerts;
    
    UPROPERTY()
    TArray<FMaiWallNavTriangle> _NavPolys;
    
    FMaiWallNavSurface();
};

