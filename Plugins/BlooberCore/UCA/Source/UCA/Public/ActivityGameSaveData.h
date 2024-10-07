#pragma once
#include "CoreMinimal.h"
#include "ActivitySaveData.h"
#include "ActivityGameSaveData.generated.h"

USTRUCT()
struct FActivityGameSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ActiveZone;
    
    UPROPERTY()
    TArray<FActivitySaveData> Activities;
    
    UCA_API FActivityGameSaveData();
};

