#include "SHAnimMovementSubcomp.h"

USHAnimMovementSubcomp::USHAnimMovementSubcomp() {
    this->CustomLocomotionGraphTag = TEXT("Locomotion");
    this->CustomChangeLocomotionSnapshotName = TEXT("ChangeLocomotion");
    this->LocomotionAnimInstanceCurrent = NULL;
    this->MainCharAnimationInstance = NULL;
}

bool USHAnimMovementSubcomp::ShouldMove() const {
    return false;
}

bool USHAnimMovementSubcomp::ShouldLookOnAimWalk() const {
    return false;
}

bool USHAnimMovementSubcomp::IsMoving() const {
    return false;
}

bool USHAnimMovementSubcomp::HasMovementInput() const {
    return false;
}

USHLocomotionAnimInstance* USHAnimMovementSubcomp::GetLocomotionAnimInstance() const {
    return NULL;
}

ELocomotionState USHAnimMovementSubcomp::GetLocomotionAnimationState() const {
    return ELocomotionState::Idle;
}

bool USHAnimMovementSubcomp::CanPlayInvestigationAnim() const {
    return false;
}


