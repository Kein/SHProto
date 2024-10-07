#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionResultAnimation.h"
#include "SHHitReactionResultBonePhysics.h"
#include "SHHitReactionResultRotation.h"
#include "SHHitReactionResultState.h"
#include "SHHitReactionResult.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DebugVisualBehaviorName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHHitReactionResultState HitReactionState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHHitReactionResultAnimation> Animations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHHitReactionResultAnimation> FinishingAnimations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHHitReactionResultAnimation> TwitchAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSHHitReactionResultBonePhysics> BonePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHHitReactionResultRotation Rotation;
    
    FSHHitReactionResult();
};

