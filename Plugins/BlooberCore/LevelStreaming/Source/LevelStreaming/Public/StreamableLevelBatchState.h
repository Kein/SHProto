#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StreamableLevelBatch.h"
#include "StreamableLevelBatchState.generated.h"

class UStreamableLevelState;

UCLASS()
class LEVELSTREAMING_API UStreamableLevelBatchState : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FStreamableLevelBatch Batch;
    
    UPROPERTY()
    TArray<UStreamableLevelState*> Levels;
    
public:
    UStreamableLevelBatchState();

};

