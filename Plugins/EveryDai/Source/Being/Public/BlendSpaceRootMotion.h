#pragma once
#include "CoreMinimal.h"
#include "AnimationOrRootMotion.h"
#include "BlendSpaceRootMotion.generated.h"

USTRUCT(BlueprintType)
struct BEING_API FBlendSpaceRootMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<float, FAnimationOrRootMotion> _RootMotion;
    
    FBlendSpaceRootMotion();
};

