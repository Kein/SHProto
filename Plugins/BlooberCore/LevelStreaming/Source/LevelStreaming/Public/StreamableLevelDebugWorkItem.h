#pragma once
#include "CoreMinimal.h"
#include "ELevelStreamingTaskWorkType.h"
#include "StreamableLevelDebugWorkItem.generated.h"

USTRUCT(BlueprintType)
struct FStreamableLevelDebugWorkItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ELevelStreamingTaskWorkType Work;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 WorkDuration;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Completed;
    
    LEVELSTREAMING_API FStreamableLevelDebugWorkItem();
};

