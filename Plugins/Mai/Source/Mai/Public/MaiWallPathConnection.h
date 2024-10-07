#pragma once
#include "CoreMinimal.h"
#include "MaiWallPathPoint.h"
#include "MaiWallPathConnection.generated.h"

USTRUCT()
struct MAI_API FMaiWallPathConnection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMaiWallPathPoint _TargetPoint;
    
    UPROPERTY()
    float _Dist;
    
    FMaiWallPathConnection();
};

