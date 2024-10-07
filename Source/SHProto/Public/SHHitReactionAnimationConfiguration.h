#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHHitReactionAnimationConfiguration.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionAnimationConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData Animation;
    
    FSHHitReactionAnimationConfiguration();
};

