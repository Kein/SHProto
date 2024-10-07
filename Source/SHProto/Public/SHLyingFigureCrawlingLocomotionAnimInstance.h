#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHLyingFigureAnimInstanceCrawlingLocomotionState.h"
#include "SHLyingFigureLocomotionAnimInstance.h"
#include "SHLyingFigureCrawlingLocomotionAnimInstance.generated.h"

class UAnimSequenceBase;

UCLASS(NonTransient)
class SHPROTO_API USHLyingFigureCrawlingLocomotionAnimInstance : public USHLyingFigureLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
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
    
    UPROPERTY(BlueprintReadOnly)
    ESHLyingFigureAnimInstanceCrawlingLocomotionState LocomotionState;
    
public:
    USHLyingFigureCrawlingLocomotionAnimInstance();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void GetTransformationToStandingAnimation(const FRotator& InLocalRotation, UAnimSequenceBase*& OutAnimation, float& OutPlayRate, float& OutBlendInDuration, float& OutBlendOutDuration, FRotator& OutAnimationRotation, FRotator& OutRemainderRotation, bool& OutUsesDelayedRootRotation) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetDesiredRotationYaw(float& OutYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintPure)
    void GetSmoothedDesiredRotationYaw(float& OutYaw) const;
    
};

