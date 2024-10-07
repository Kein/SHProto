#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHHitReactionResultAnimation.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionResultAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayAnimationData Animation;
    
    FSHHitReactionResultAnimation();
};

