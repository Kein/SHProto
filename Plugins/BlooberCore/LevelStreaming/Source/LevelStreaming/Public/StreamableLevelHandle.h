#pragma once
#include "CoreMinimal.h"
#include "StreamableLevelHandle.generated.h"

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FStreamableLevelHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame, EditAnywhere)
    FName UniqueLevelId;
    
public:
    FStreamableLevelHandle();
};

