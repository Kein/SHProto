#pragma once
#include "CoreMinimal.h"
#include "ItemQuickGrabAnimationData.generated.h"

class UAnimSequence;
class UBlendSpace;

USTRUCT(BlueprintType)
struct SHPROTO_API FItemQuickGrabAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UBlendSpace> GrabItemBlendspace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> WeaponHandPoseOverride;
    
    FItemQuickGrabAnimationData();
};

