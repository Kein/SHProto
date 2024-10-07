#pragma once
#include "CoreMinimal.h"
#include "SHStatisticsValueProcessor.h"
#include "SHAnimsPlayedStatisticsValueProcessor.generated.h"

UCLASS()
class SHPROTO_API USHAnimsPlayedStatisticsValueProcessor : public USHStatisticsValueProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    int32 AutoLockedDoorCheckAnimActionPlayedCount;
    
public:
    USHAnimsPlayedStatisticsValueProcessor();

};

