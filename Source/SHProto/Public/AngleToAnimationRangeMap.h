#pragma once
#include "CoreMinimal.h"
#include "AngleToAnimationRangeMap.generated.h"

USTRUCT(BlueprintType)
struct FAngleToAnimationRangeMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngleA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngleB;
    
    UPROPERTY(EditAnywhere)
    bool UseAnimationTimeRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnimationTimeA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnimationTimeB;
    
    SHPROTO_API FAngleToAnimationRangeMap();
};

