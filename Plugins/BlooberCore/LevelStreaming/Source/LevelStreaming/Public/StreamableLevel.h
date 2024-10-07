#pragma once
#include "CoreMinimal.h"
#include "StreamableLevel.generated.h"

class UStreamableLevelConfig;
class UWorld;

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FStreamableLevel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName UniqueName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName Path;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UStreamableLevelConfig> Config;
    
public:
    FStreamableLevel();
};

