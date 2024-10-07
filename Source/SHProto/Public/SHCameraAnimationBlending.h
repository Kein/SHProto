#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SHCameraAnimationBlending.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHCameraAnimationBlending {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FViewTargetTransitionParams BlendInParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FViewTargetTransitionParams BlendOutParams;
    
    FSHCameraAnimationBlending();
};

