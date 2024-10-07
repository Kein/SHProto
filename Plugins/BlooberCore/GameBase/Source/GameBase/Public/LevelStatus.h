#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStreamableLevelStatus.h"
#include "StreamableLevelHandle.h"
#include "LevelStatus.generated.h"

USTRUCT()
struct FLevelStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    FStreamableLevelHandle Handle;
    
    UPROPERTY()
    EStreamableLevelStatus Status;
    
    UPROPERTY()
    FTransform Transform;
    
    GAMEBASE_API FLevelStatus();
};

