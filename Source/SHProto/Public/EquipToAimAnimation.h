#pragma once
#include "CoreMinimal.h"
#include "EquipToAimAnimation.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FEquipToAimAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendOutTime;
    
    SHPROTO_API FEquipToAimAnimation();
};

