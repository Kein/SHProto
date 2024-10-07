#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EquipToAimAnimation.h"
#include "ObstacleForwardCheckSettings.h"
#include "SHLocomotionAnimInstance.h"
#include "SHLocomotionRangeAnimInstance.generated.h"

class USHAnimMontagePlayer;

UCLASS(NonTransient)
class SHPROTO_API USHLocomotionRangeAnimInstance : public USHLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bHasAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AimOffsetArmsInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D HeadRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D AimOffsetArms;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEquipToAimAnimation EquipToAimAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FObstacleForwardCheckSettings AimObstacleCheckSetting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bIsAiming;
    
    UPROPERTY(Transient)
    USHAnimMontagePlayer* EquipToAimPlayer_Hand;
    
    UPROPERTY(Transient)
    USHAnimMontagePlayer* EquipToAimPlayer_Body;
    
public:
    USHLocomotionRangeAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    float MapAimPoseWeightToIgnoreWeaponIKCurve() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPureAimPoseBlendingInOurOut() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyPreAimOffsetSlotAnimationPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimPoseBlendingOut(bool MustBePureAimPose) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimPoseBlendingInOurOut(bool MustBePureAimPose) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimPoseBlendingIn(bool MustBePureAimPose) const;
    
    UFUNCTION(BlueprintPure)
    FName GetAimPoseWeightCurveName() const;
    
};

