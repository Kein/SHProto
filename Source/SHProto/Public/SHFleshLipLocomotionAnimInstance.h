#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHFleshLipLocomotionAnimInstance.generated.h"

class USHFleshLipAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHFleshLipLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
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
    USHFleshLipLocomotionAnimInstance();

protected:
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
    
    UFUNCTION(BlueprintPure)
    bool GetFleshLipRightArmIsReleased() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFleshLipLegsAreReleased() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFleshLipLeftArmIsReleased() const;
    
    UFUNCTION(BlueprintPure)
    USHFleshLipAnimInstanceStateData* GetFleshLipAnimInstanceStateData() const;
    
};

