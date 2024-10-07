#pragma once
#include "CoreMinimal.h"
#include "StreamableLevelBatchHandle.generated.h"

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FStreamableLevelBatchHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FName UniqueBatchId;
    
public:
    FStreamableLevelBatchHandle();
};

