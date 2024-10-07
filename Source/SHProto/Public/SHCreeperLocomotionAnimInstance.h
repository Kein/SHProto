#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESHCreeperAnimInstanceLocomotionState.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHCreeperLocomotionAnimInstance.generated.h"

class USHCreeperAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHCreeperLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESHCreeperAnimInstanceLocomotionState LocomotionStateRequest;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeLegOnGround;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float StrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SubgoalDistanceForStraightMovement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TurnInPlaceMinAngleInFastMovement;
    
    UPROPERTY(BlueprintReadOnly)
    float TurnInPlaceAngle;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float MovementTypeFlipIntervalMin;
    
    UPROPERTY(EditDefaultsOnly)
    float MovementTypeFlipIntervalMax;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsWalkingStraight;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsNearSubgoal;
    
    UPROPERTY()
    FTimerHandle MovementTypeFlipTimer;
    
public:
    USHCreeperLocomotionAnimInstance();

    UFUNCTION(BlueprintPure)
    void GetDesiredVelocitySizeAndYaw(float& OutVectorSize, float& OutVectorYaw, float Smoothing);
    
protected:
    UFUNCTION(BlueprintPure)
    USHCreeperAnimInstanceStateData* GetCreeperAnimInstanceStateData() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheTurnInPlaceAngle();
    
};

