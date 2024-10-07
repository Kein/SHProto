#pragma once
#include "CoreMinimal.h"
#include "ELogCustomVerbosity.h"
#include "LogCategoryConfig.generated.h"

USTRUCT(BlueprintType)
struct LOG_API FLogCategoryConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELogCustomVerbosity Verbosity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IncludeFileLocation;
    
    FLogCategoryConfig();
};

