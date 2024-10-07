#pragma once
#include "CoreMinimal.h"
#include "ESHMaryAnimInstanceLocomotionState.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHMaryLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHMaryLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESHMaryAnimInstanceLocomotionState LocomotionStateRequest;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    float DesiredRotationYaw;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredStrafeAngle;
    
public:
    USHMaryLocomotionAnimInstance();

};

