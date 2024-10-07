#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipHangingAnimInstanceLocomotionState.h"
#include "SHFleshLipLocomotionAnimInstance.h"
#include "SHFleshLipHangingLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHFleshLipHangingLocomotionAnimInstance : public USHFleshLipLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESHFleshLipHangingAnimInstanceLocomotionState LocomotionState;
    
public:
    USHFleshLipHangingLocomotionAnimInstance();

};

