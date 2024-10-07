#include "SHCharAnimationInstance.h"

USHCharAnimationInstance::USHCharAnimationInstance() {
    this->LocomotionGraphTag = TEXT("Locomotion");
    this->LookAtOffsetGraphTag = TEXT("LookAtOffset");
    this->ChangeLocomotionSnapshotName = TEXT("ChangeLocomotion");
    this->ChangeLocomotionAlphaInterpSpeed = 5.00f;
    this->bWholeBodyAnimation = false;
    this->ChangeLocomotionAlpha = 0.00f;
    this->LocomotionState = ELocomotionState::Idle;
    this->RequestedNewAnimationsSetData = NULL;
    this->WeaponManageCmbSubcomp = NULL;
}

bool USHCharAnimationInstance::IsCharacterCorrectivePostprocessEnabled_Implementation() const {
    return false;
}

bool USHCharAnimationInstance::IsChangingWeaponActionPlaying() const {
    return false;
}

bool USHCharAnimationInstance::IsAimingWeapon() const {
    return false;
}

void USHCharAnimationInstance::GetSpeedWarpingForcedMultiplier(bool& Enabled, float& ForcedValue) const {
}

TArray<FName> USHCharAnimationInstance::GetPlayingSlotAnimationSlotNames() const {
    return TArray<FName>();
}

ASHItemWeapon* USHCharAnimationInstance::GetEquippedWeapon() const {
    return NULL;
}

TArray<FName> USHCharAnimationInstance::GetAllPlayingSlotAnimationSlotNames() const {
    return TArray<FName>();
}


