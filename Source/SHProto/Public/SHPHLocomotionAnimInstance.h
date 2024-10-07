#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESHPHAnimInstanceLocomotionState.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHPHLocomotionAnimInstance.generated.h"

class USHPHAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHPHLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESHPHAnimInstanceLocomotionState LocomotionStateRequest;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredStrafeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bUseTurnInPlace;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    float MovementSpeedMultiplierTarget;
    
    UPROPERTY(BlueprintReadOnly)
    float MovementSpeedMultiplierCurrent;
    
    UPROPERTY(BlueprintReadOnly)
    float MovementSpeedMultiplierTime;
    
    UPROPERTY(BlueprintReadOnly)
    float MovementSpeedMultiplierTimer;
    
    UPROPERTY(BlueprintReadOnly)
    float MovementSpeedMultiplierBlendInSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float MovementSpeedMultiplierBlendOutSpeed;
    
public:
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeLegOnGround;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float TurnInPlaceAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float LookAtAngleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bLookAtTarget;
    
    USHPHLocomotionAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetMovementSpeedMultiplier(float NewMovementSpeed, float Time, float BlendInTime, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtEnable(bool NewLookAtEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtAngle(FVector LookAtTargetLocation);
    
protected:
    UFUNCTION(BlueprintPure)
    USHPHAnimInstanceStateData* GetPHAnimInstanceStateData() const;
    
};

