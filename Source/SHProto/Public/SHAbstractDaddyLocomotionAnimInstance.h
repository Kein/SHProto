#pragma once
#include "CoreMinimal.h"
#include "ESHAbstractDaddyAnimInstanceLocomotionState.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHAbstractDaddyLocomotionAnimInstance.generated.h"

class USHAbstractDaddyAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHAbstractDaddyLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESHAbstractDaddyAnimInstanceLocomotionState LocomotionStateRequest;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeLegOnGround;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float StrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float TurnInPlaceAngle;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bOutstretchedArmsActive;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    bool bChargeMovementIsActive;
    
public:
    USHAbstractDaddyLocomotionAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetChargeMovementIsActive(bool NewActive);
    
protected:
    UFUNCTION(BlueprintPure)
    USHAbstractDaddyAnimInstanceStateData* GetAbstractDaddyAnimInstanceStateData() const;
    
};

