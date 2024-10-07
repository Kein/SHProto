#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHLyingFigureAnimInstanceStandingLocomotionState.h"
#include "SHLyingFigureLocomotionAnimInstance.h"
#include "SHLyingFigureStandingLocomotionAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(NonTransient)
class SHPROTO_API USHLyingFigureStandingLocomotionAnimInstance : public USHLyingFigureLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESHLyingFigureAnimInstanceStandingLocomotionState LocomotionState;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DesiredVelocityIncrementHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector DesiredVelocityDecrementHalfTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector TargetDesiredVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float DesiredYawAdjustmentHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetDesiredRotationYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float LookAtAlphaIncrementHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    float LookAtAlphaDecrementHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    float StruggleAlphaIncrementHalfTime;
    
    UPROPERTY(EditDefaultsOnly)
    float StruggleAlphaDecrementHalfTime;
    
    UPROPERTY(BlueprintReadOnly)
    float SmoothedStruggleAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float StrugglePlayRate;
    
public:
    USHLyingFigureStandingLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void SetStruggle(float ALPHA, float PlayRate);
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void GetTransformationToCrawlingAnimation(const FRotator& InLocalRotation, UAnimSequenceBase*& OutAnimation, float& OutPlayRate, float& OutBlendInDuration, float& OutBlendOutDuration, FRotator& OutAnimaitonRotation, FRotator& OutRemainderRotation, bool& OutUsesDelayedRootRotation) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetStruggleAlpha(float& OutAlpha) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetLookAtAlpha(float& OutAlpha) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredRotationYaw(float& OutYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedStruggle(float& OutPlayRate, float& OutAlpha) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredRotationYaw(float& OutYaw) const;
    
};

