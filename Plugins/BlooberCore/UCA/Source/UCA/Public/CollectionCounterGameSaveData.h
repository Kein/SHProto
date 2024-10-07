#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollectionCounterGameSaveData.generated.h"

USTRUCT()
struct FCollectionCounterGameSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<FGuid> Value;
    
    UCA_API FCollectionCounterGameSaveData();
};

