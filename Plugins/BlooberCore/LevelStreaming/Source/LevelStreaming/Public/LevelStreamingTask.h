#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelStreamingTask.generated.h"

class UStreamableLevelState;

UCLASS()
class LEVELSTREAMING_API ULevelStreamingTask : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UStreamableLevelState* State;
    
public:
    ULevelStreamingTask();

};

