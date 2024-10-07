#pragma once
#include "CoreMinimal.h"
#include "MaiTickIntervalRange.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiTickIntervalRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _MinInterval;
    
    UPROPERTY(EditAnywhere)
    float _MaxInterval;
    
    FMaiTickIntervalRange();
};

