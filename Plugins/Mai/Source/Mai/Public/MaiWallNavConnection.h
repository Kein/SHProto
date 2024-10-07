#pragma once
#include "CoreMinimal.h"
#include "MaiWallNavConnection.generated.h"

USTRUCT()
struct MAI_API FMaiWallNavConnection {
    GENERATED_BODY()
public:
    UPROPERTY()
    int16 _TargetPointIdx;
    
    UPROPERTY()
    int16 _RightTriIdx;
    
    UPROPERTY()
    int16 _LinkIdx;
    
    FMaiWallNavConnection();
};

