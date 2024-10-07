#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHMannequinAnimInstanceStandingLocomotionState.h"
#include "SHMannequinLocomotionAnimInstance.h"
#include "SHMannequinStandingLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHMannequinStandingLocomotionAnimInstance : public USHMannequinLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ESHMannequinAnimInstanceStandingLocomotionState LocomotionState;
    
    UPROPERTY(EditDefaultsOnly)
    float MinimumWalkVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float RotationToStrafingRatio;
    
    UPROPERTY(EditDefaultsOnly)
    float MovementStopDelay;
    
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
    
public:
    USHMannequinStandingLocomotionAnimInstance();

    UFUNCTION(BlueprintPure)
    void GetTargetLookAtAlpha(float& OutAlpha) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredVelocitySizeAndYawLimitedToDirection(float& OutVelocitySize, float& OutVelocityYaw, float InDirectionYaw, float InToleranceAngle) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredRotationYaw(float& OutYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredVelocitySizeAndYawLimitedToDirection(float& OutVelocitySize, float& OutVelocityYaw, float InDirectionYaw, float InToleranceAngle) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredRotationYaw(float& OutYaw) const;
    
};

