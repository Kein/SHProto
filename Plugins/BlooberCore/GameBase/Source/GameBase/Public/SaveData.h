#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveData.generated.h"

USTRUCT()
struct FSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool HasData;
    
    UPROPERTY(Transient)
    FTimespan PlayTime;
    
    GAMEBASE_API FSaveData();
};

