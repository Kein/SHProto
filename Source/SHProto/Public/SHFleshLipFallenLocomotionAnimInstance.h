#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipFallenAnimInstanceLocomotionState.h"
#include "SHFleshLipLocomotionAnimInstance.h"
#include "SHFleshLipFallenLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHFleshLipFallenLocomotionAnimInstance : public USHFleshLipLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESHFleshLipFallenAnimInstanceLocomotionState LocomotionState;
    
public:
    USHFleshLipFallenLocomotionAnimInstance();

};

