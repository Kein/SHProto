#pragma once
#include "CoreMinimal.h"
#include "DeadZoneRange.generated.h"

USTRUCT(BlueprintType)
struct FDeadZoneRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TargetValue;
    
    SHPROTO_API FDeadZoneRange();
};

