#pragma once
#include "CoreMinimal.h"
#include "AnimationRootMotion.h"
#include "SectionRootMotion.generated.h"

USTRUCT(BlueprintType)
struct BEING_API FSectionRootMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName _Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float _StartPos;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FAnimationRootMotion _AnimData;
    
    FSectionRootMotion();
};

