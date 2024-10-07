#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHHitReactionStateAnimationSerializedData.generated.h"

USTRUCT()
struct SHPROTO_API FSHHitReactionStateAnimationSerializedData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FPlayAnimationData AnimationData;
    
    UPROPERTY(SaveGame)
    float AnimationPosition;
    
    FSHHitReactionStateAnimationSerializedData();
};

