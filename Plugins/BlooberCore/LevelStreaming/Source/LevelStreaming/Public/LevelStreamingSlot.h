#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingSlotConfig.h"
#include "LevelStreamingSlot.generated.h"

class ULevelStreamingTask;

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FLevelStreamingSlotConfig Config;
    
    UPROPERTY()
    ULevelStreamingTask* Task;
    
public:
    FLevelStreamingSlot();
};

