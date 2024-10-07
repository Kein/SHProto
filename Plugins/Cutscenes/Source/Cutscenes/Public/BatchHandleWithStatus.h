#pragma once
#include "CoreMinimal.h"
#include "EStreamableLevelStatus.h"
#include "StreamableLevelBatchHandle.h"
#include "BatchHandleWithStatus.generated.h"

USTRUCT(BlueprintType)
struct FBatchHandleWithStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStreamableLevelBatchHandle StreamableLevelBatchHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStreamableLevelStatus ExpectedStatus;
    
    CUTSCENES_API FBatchHandleWithStatus();
};

