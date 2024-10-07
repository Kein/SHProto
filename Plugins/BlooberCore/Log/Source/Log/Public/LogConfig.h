#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ELogCustomVerbosity.h"
#include "LogCategoryConfig.h"
#include "LogConfig.generated.h"

UCLASS(BlueprintType)
class LOG_API ULogConfig : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseGlobalVerbosity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELogCustomVerbosity GlobalVerbosity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableMessageLogWarnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableMessageLogErrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FLogCategoryConfig> Config;
    
public:
    ULogConfig();

};

