#pragma once
#include "CoreMinimal.h"
#include "SHStatisticsValueProcessor.h"
#include "SHDistanceTravelledStatisticsValueProcessor.generated.h"

UCLASS()
class SHPROTO_API USHDistanceTravelledStatisticsValueProcessor : public USHStatisticsValueProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    int32 DistanceTravelled;
    
public:
    USHDistanceTravelledStatisticsValueProcessor();

};

