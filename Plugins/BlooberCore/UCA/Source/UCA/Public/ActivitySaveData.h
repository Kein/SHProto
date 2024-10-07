#pragma once
#include "CoreMinimal.h"
#include "ActivitySaveData.generated.h"

USTRUCT()
struct FActivitySaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ActivityId;
    
    UPROPERTY()
    uint32 Flags;
    
    UPROPERTY()
    uint32 PendingState;
    
    UCA_API FActivitySaveData();
};

