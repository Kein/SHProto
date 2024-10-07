#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipStandingAnimInstanceLocomotionState.h"
#include "SHFleshLipLocomotionAnimInstance.h"
#include "SHFleshLipStandingLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHFleshLipStandingLocomotionAnimInstance : public USHFleshLipLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESHFleshLipStandingAnimInstanceLocomotionState LocomotionState;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    bool bChargeMovementIsActive;
    
public:
    USHFleshLipStandingLocomotionAnimInstance();

};

