#include "SHLocomotionRangeAnimInstance.h"
#include "SHAnimMontagePlayer.h"

USHLocomotionRangeAnimInstance::USHLocomotionRangeAnimInstance() {
    this->MoveDirectionDeadZonesMapping.AddDefaulted(5);
    this->bHasAmmo = false;
    this->AimOffsetArmsInterpSpeed = 6.00f;
    this->bIsAiming = false;
    this->EquipToAimPlayer_Hand = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("EquipToAimPlayer_Hand"));
    this->EquipToAimPlayer_Body = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("EquipToAimPlayer_Body"));
}

float USHLocomotionRangeAnimInstance::MapAimPoseWeightToIgnoreWeaponIKCurve() const {
    return 0.0f;
}

bool USHLocomotionRangeAnimInstance::IsPureAimPoseBlendingInOurOut() const {
    return false;
}

bool USHLocomotionRangeAnimInstance::IsAnyPreAimOffsetSlotAnimationPlaying() const {
    return false;
}

bool USHLocomotionRangeAnimInstance::IsAimPoseBlendingOut(bool MustBePureAimPose) const {
    return false;
}

bool USHLocomotionRangeAnimInstance::IsAimPoseBlendingInOurOut(bool MustBePureAimPose) const {
    return false;
}

bool USHLocomotionRangeAnimInstance::IsAimPoseBlendingIn(bool MustBePureAimPose) const {
    return false;
}

FName USHLocomotionRangeAnimInstance::GetAimPoseWeightCurveName() const {
    return NAME_None;
}


