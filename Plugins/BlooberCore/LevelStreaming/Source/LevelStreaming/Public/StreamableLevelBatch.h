#pragma once
#include "CoreMinimal.h"
#include "StreamableLevelHandle.h"
#include "StreamableLevelBatch.generated.h"

class UStreamableLevelBatchConfig;

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FStreamableLevelBatch {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName UniqueName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FStreamableLevelHandle> Levels;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UStreamableLevelBatchConfig> Config;
    
public:
    FStreamableLevelBatch();
};

