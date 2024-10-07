#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingEngineLimits.generated.h"

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingEngineLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AsyncLoadingTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PriorityAsyncLoadingExtraTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActorInitializationUpdateTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ComponentsRegistrationGranularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ComponentUnregisterUpdateTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ComponentsUnregistrationGranularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceGCAfterLevelStreamedOut;
    
    FLevelStreamingEngineLimits();
};

