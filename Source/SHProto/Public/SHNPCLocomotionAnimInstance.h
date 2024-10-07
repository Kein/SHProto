#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "SHNPCLocomotionAnimInstance.generated.h"

class USHAnimComponent;
class USHNPCAnimInstanceStateData;
class USHNPCLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHNPCLocomotionAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TurnInPlaceMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TurnInPlaceMinAngleInMovement;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TurnInPlaceToMoveAngleTolerate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PelvisOffsetInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FeetIKLockIncrementInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float FeetIKLockDecrementInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bWarpingEnable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float StrideScale;
    
    UPROPERTY(BlueprintReadOnly)
    FVector StrideDirection;
    
    UPROPERTY()
    USHNPCAnimInstanceStateData* p_AnimInstanceStateData;
    
public:
    USHNPCLocomotionAnimInstance();

    UFUNCTION(BlueprintCallable)
    void OnMoveStartBegin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MovementVariationRandomChange();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnReplacedOtherLocomotionAnimInstance(USHNPCLocomotionAnimInstance* PreviousLocomotionInstance);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnAnimInstanceStateDataUpdated();
    
    UFUNCTION(BlueprintPure)
    float GetTurnInPlaceAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetStrideWarpingSmooth() const;
    
    UFUNCTION(BlueprintPure)
    float GetStrafeAngle() const;
    
    UFUNCTION(BlueprintPure)
    void GetSpeedWarping(bool& OutWarpingEnabled, float& OutStrideScale, FVector& OutStrideDirection) const;
    
    UFUNCTION(BlueprintPure)
    float GetDesiredStrafeAngle() const;
    
    UFUNCTION(BlueprintPure)
    USHAnimComponent* GetAnimComponent();
    
};

