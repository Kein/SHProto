#pragma once
#include "CoreMinimal.h"
#include "AnimationMovementSpeed.generated.h"

USTRUCT(BlueprintType)
struct FAnimationMovementSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Forward;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Back;
    
    SHPROTO_API FAnimationMovementSpeed();
};

