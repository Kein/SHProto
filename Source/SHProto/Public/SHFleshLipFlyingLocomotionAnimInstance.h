#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipFlyingAnimInstanceLocomotionState.h"
#include "SHFleshLipLocomotionAnimInstance.h"
#include "SHFleshLipFlyingLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHFleshLipFlyingLocomotionAnimInstance : public USHFleshLipLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESHFleshLipFlyingAnimInstanceLocomotionState LocomotionState;
    
public:
    USHFleshLipFlyingLocomotionAnimInstance();

};

