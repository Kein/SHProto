#pragma once
#include "CoreMinimal.h"
#include "ESHNurseAnimInstanceLocomotionState.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHNurseLocomotionAnimInstance.generated.h"

class USHNurseAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHNurseLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESHNurseAnimInstanceLocomotionState LocomotionStateRequest;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeLegOnGround;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float StrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float TurnInPlaceAngle;
    
    USHNurseLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    USHNurseAnimInstanceStateData* GetNurseAnimInstanceStateData() const;
    
};

