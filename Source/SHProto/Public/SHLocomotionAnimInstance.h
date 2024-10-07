#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "AnimationMovementSpeed.h"
#include "DeadZoneRange.h"
#include "ELocomotionState.h"
#include "ESHHealthStateEnum.h"
#include "ESHInteriorExteriorStateEnum.h"
#include "ESHMovementProfile.h"
#include "ObstacleForwardCheckSettings.h"
#include "SHLocomotionAnimInstance.generated.h"

class ASHItemWeapon;
class UObject;

UCLASS(NonTransient)
class SHPROTO_API USHLocomotionAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    ELocomotionState LocomotionState;
    
    UPROPERTY(BlueprintReadWrite)
    bool bFullBodyAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FAnimationMovementSpeed> AnimationsMovementSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly)
    FVector VelocityRelative;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D MoveXYCurrent;
    
    UPROPERTY(BlueprintReadOnly)
    float SpeedXY;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveXYAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveDirection;
    
    UPROPERTY(BlueprintReadOnly)
    bool StopImmediatelyRequested;
    
    UPROPERTY(BlueprintReadOnly)
    bool StartImmediatelyRequested;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayStopAnimationRequested;
    
    UPROPERTY(BlueprintReadOnly)
    float StopAnimationMoveDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D Lean;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LeanInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LeanMaxSpeedValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector2D IdleCustomCoolDownRandomRange;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIdleCustomPlayRequested;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FObstacleForwardCheckSettings ObstacleForwardCheckSettings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PelvisOffsetInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FeetIKLockInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool UseMoveDirectionDeadZonesMapping;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDeadZoneRange> MoveDirectionDeadZonesMapping;
    
    UPROPERTY(BlueprintReadOnly)
    float StateWeight_Move;
    
    UPROPERTY(BlueprintReadOnly)
    float StateWeight_IdleLoop;
    
    UPROPERTY(BlueprintReadOnly)
    float AnimTimeRemaining_IdleCustom;
    
public:
    USHLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    float TryGetCurrentStateWeight(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldProcessRotateInPlace() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool ShouldMove() const;
    
    UFUNCTION(BlueprintCallable)
    void SetForcedCloseToWallState(bool Enabled, UObject* RequestOwner);
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool Rule_WalkToRun() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool Rule_RunToWalk() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool Rule_IdleDefaultToIdleCustom() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool Rule_IdleCustomToIdleDefault() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStopEnter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveStateUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMoveExit();
    
    UFUNCTION(BlueprintCallable)
    void OnMoveEnter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIdleLoopStateUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnIdleLoopExit();
    
    UFUNCTION(BlueprintCallable)
    void OnIdleLoopEnter();
    
    UFUNCTION(BlueprintCallable)
    void OnIdleExit();
    
    UFUNCTION(BlueprintCallable)
    void OnIdleEnter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIdleCustomStateUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnIdleCustomExit();
    
    UFUNCTION(BlueprintCallable)
    void OnIdleCustomEnter();
    
    UFUNCTION(BlueprintPure)
    bool NotShouldMove() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSprinting_WaterOverride() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSprinting(bool OverrideIfInWater) const;
    
    UFUNCTION(BlueprintPure)
    bool IsObstacleDetected() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInDangerMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCloseToWall() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCloseToEnemy() const;
    
    UFUNCTION(BlueprintPure)
    bool HasValidLookAtTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMovementInput() const;
    
    UFUNCTION(BlueprintPure)
    float GetQuantizedMoveDirection() const;
    
    UFUNCTION(BlueprintPure)
    float GetMoveDirection() const;
    
    UFUNCTION(BlueprintPure)
    ESHInteriorExteriorStateEnum GetInteriorExteriorState() const;
    
    UFUNCTION(BlueprintPure)
    ESHHealthStateEnum GetHealthState() const;
    
    UFUNCTION(BlueprintPure)
    bool GetForcedCloseToWallState() const;
    
    UFUNCTION(BlueprintPure)
    ASHItemWeapon* GetEquippedWeapon() const;
    
    UFUNCTION(BlueprintPure)
    ESHMovementProfile GetCurrentMovementProfile() const;
    
    UFUNCTION(BlueprintPure)
    float GetControlRotationYawDelta() const;
    
};

