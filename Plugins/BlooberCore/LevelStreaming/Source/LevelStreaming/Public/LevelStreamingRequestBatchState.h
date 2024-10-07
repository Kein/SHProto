#pragma once
#include "CoreMinimal.h"
#include "EStreamableLevelStatus.h"
#include "LevelStreamingRequestBatchState.generated.h"

class UStreamableLevelBatchState;

USTRUCT(BlueprintType)
struct FLevelStreamingRequestBatchState {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStreamableLevelBatchState* Batch;
    
    UPROPERTY()
    EStreamableLevelStatus Status;
    
    UPROPERTY()
    int32 Priority;
    
    LEVELSTREAMING_API FLevelStreamingRequestBatchState();
};

