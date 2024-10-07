#pragma once
#include "CoreMinimal.h"
#include "EStreamableLevelStatus.h"
#include "StreamableLevelBatchHandle.h"
#include "ManagedStreamableLevelBatchHandle.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FManagedStreamableLevelBatchHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStreamableLevelBatchHandle Batch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStreamableLevelStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UObject*> ShowVisibleRequesters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UObject*> PreloadRequesters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HideTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnloadTimer;
    
    FManagedStreamableLevelBatchHandle();
};

