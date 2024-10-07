#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHAbstractDaddyAnimInstanceStandingLocomotionState.h"
#include "SHAbstractDaddyLocomotionAnimInstance.h"
#include "SHAbstractDaddyStandingLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHAbstractDaddyStandingLocomotionAnimInstance : public USHAbstractDaddyLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ESHAbstractDaddyAnimInstanceStandingLocomotionState LocomotionState;
    
    UPROPERTY(EditDefaultsOnly)
    float RotationToStrafingRatio;
    
    UPROPERTY(EditDefaultsOnly)
    float MovementStopDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float MovementStopVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DesiredVelocityIncrementHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DesiredVelocityDecrementHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector TargetDesiredVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float DesiredYawAdjustmentHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetDesiredRotationYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float LookAtAlphaIncrementHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    float LookAtAlphaDecrementHalfTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BrakingVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector BrakingDistanceFactor;
    
public:
    USHAbstractDaddyStandingLocomotionAnimInstance();

    UFUNCTION(BlueprintPure)
    void GetTargetLookAtAlpha(float& OutAlpha) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredRotationYaw(float& OutYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredRotationYaw(float& OutYaw) const;
    
};

