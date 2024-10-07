#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHEddieWalkingAnimInstanceLocomotionState.h"
#include "SHEddieLocomotionAnimInstance.h"
#include "SHEddieWalkingLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHEddieWalkingLocomotionAnimInstance : public USHEddieLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ESHEddieWalkingAnimInstanceLocomotionState LocomotionStateRequest;
    
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
    USHEddieWalkingLocomotionAnimInstance();

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

