#pragma once
#include "CoreMinimal.h"
#include "EStreamableLevelStatus.h"
#include "StreamableLevelBatchHandle.h"
#include "LevelStreamingRequestElement.generated.h"

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingRequestElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStreamableLevelStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AbandonIfLockhartElem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStreamableLevelBatchHandle> Batches;
    
public:
    FLevelStreamingRequestElement();
};

