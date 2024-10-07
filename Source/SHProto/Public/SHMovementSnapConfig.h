#pragma once
#include "CoreMinimal.h"
#include "SHMovementSnapConfig.generated.h"

USTRUCT(BlueprintType)
struct FSHMovementSnapConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RequiredDist2DToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWantStopMovementImmediatelyOnEnd;
    
    SHPROTO_API FSHMovementSnapConfig();
};

