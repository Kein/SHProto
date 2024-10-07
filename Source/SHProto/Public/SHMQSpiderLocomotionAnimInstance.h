#pragma once
#include "CoreMinimal.h"
#include "ESHMQSpiderAnimInstanceLocomotionState.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHMQSpiderLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHMQSpiderLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESHMQSpiderAnimInstanceLocomotionState LocomotionStateRequest;
    
    UPROPERTY(BlueprintReadOnly)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly)
    float StrafeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float WallStrideScale;
    
    UPROPERTY(BlueprintReadOnly)
    float TurnInPlaceAngle;
    
    USHMQSpiderLocomotionAnimInstance();

};

