#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelStreamingRequestBatchState.h"
#include "LevelStreamingRequestState.generated.h"

UCLASS()
class LEVELSTREAMING_API ULevelStreamingRequestState : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FLevelStreamingRequestBatchState> Batches;
    
public:
    ULevelStreamingRequestState();

};

