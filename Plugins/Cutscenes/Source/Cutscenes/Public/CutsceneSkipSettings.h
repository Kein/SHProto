#pragma once
#include "CoreMinimal.h"
#include "BatchHandleWithStatus.h"
#include "CutsceneSkipSettings.generated.h"

USTRUCT(BlueprintType)
struct FCutsceneSkipSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanBeSkipped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseSkipConditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool WaitForStreamingConditionsCompletion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FBatchHandleWithStatus> StreamingConditions;
    
    CUTSCENES_API FCutsceneSkipSettings();
};

