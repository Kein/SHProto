#pragma once
#include "CoreMinimal.h"
#include "AnimationRootMotion.h"
#include "AnimationOrRootMotion.generated.h"

class UAnimationAsset;

USTRUCT(Blueprintable)
struct BEING_API FAnimationOrRootMotion {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    bool _HasData;
    
    UPROPERTY(VisibleAnywhere)
    UAnimationAsset* _Anim;
    
    UPROPERTY(VisibleAnywhere)
    FAnimationRootMotion _RootMotion;
    
    FAnimationOrRootMotion();
};

