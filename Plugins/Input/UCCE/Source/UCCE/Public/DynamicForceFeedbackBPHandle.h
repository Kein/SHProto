#pragma once
#include "CoreMinimal.h"
#include "DynamicForceFeedbackBPHandle.generated.h"

USTRUCT(BlueprintType)
struct FDynamicForceFeedbackBPHandle {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint64 Handle;
    
    UCCE_API FDynamicForceFeedbackBPHandle();
};

