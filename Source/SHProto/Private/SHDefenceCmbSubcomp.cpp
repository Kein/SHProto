#include "SHDefenceCmbSubcomp.h"

USHDefenceCmbSubcomp::USHDefenceCmbSubcomp() {
    this->Settings = NULL;
}

void USHDefenceCmbSubcomp::SetDodgeBlocked(bool InBlocked, UObject* Object) {
}

void USHDefenceCmbSubcomp::RequestPerformDodge(FVector InMovementVector) {
}

bool USHDefenceCmbSubcomp::RequestFallToFloor(const FPlayAnimationData& FallAnim, const FSHCameraAnimationData& CameraAnim) {
    return false;
}

bool USHDefenceCmbSubcomp::RequestDefaultFallToFloor() {
    return false;
}

void USHDefenceCmbSubcomp::OnQuickTurnEnd(bool bWasCompleted) {
}

void USHDefenceCmbSubcomp::OnDodgeEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHDefenceCmbSubcomp::OnDodgeBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

bool USHDefenceCmbSubcomp::IsRightAfterDodge() const {
    return false;
}

bool USHDefenceCmbSubcomp::IsOnFloor() const {
    return false;
}

bool USHDefenceCmbSubcomp::IsInSuperArmour() const {
    return false;
}

bool USHDefenceCmbSubcomp::IsInQuickTurn() const {
    return false;
}

void USHDefenceCmbSubcomp::HandleSyncedActionEnd(ACharacter* CharacterSynchedWith) {
}

void USHDefenceCmbSubcomp::HandleSyncedActionBegin(ACharacter* CharacterSynchedWith) {
}


