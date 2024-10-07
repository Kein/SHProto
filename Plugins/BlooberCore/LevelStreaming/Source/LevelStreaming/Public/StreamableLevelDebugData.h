#pragma once
#include "CoreMinimal.h"
#include "EStreamableLevelStatus.h"
#include "StreamableLevel.h"
#include "StreamableLevelBatch.h"
#include "StreamableLevelDebugWorkItem.h"
#include "StreamableLevelDebugData.generated.h"

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FStreamableLevelDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FStreamableLevel Level;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FStreamableLevelBatch Batch;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EStreamableLevelStatus Status;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FStreamableLevelDebugWorkItem> WorkHistory;
    
    FStreamableLevelDebugData();
};

