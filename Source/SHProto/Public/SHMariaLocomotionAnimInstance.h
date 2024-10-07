#pragma once
#include "CoreMinimal.h"
#include "SHFriendLocomotionAnimInstance.h"
#include "SHMariaLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHMariaLocomotionAnimInstance : public USHFriendLocomotionAnimInstance {
    GENERATED_BODY()
public:
    USHMariaLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    float GetFlashlightCoverEyesAnimBlendWeigth() const;
    
};

