#include "SHNurseLocomotionAnimInstance.h"

USHNurseLocomotionAnimInstance::USHNurseLocomotionAnimInstance() {
    this->LocomotionStateRequest = ESHNurseAnimInstanceLocomotionState::Idle;
    this->MoveChangeLegOnGround = 0.00f;
    this->MoveChangeStrafeAngle = 0.00f;
    this->DesiredSpeed = 0.00f;
    this->StrafeAngle = 0.00f;
    this->DesiredStrafeAngle = 0.00f;
    this->TurnInPlaceAngle = 0.00f;
}

USHNurseAnimInstanceStateData* USHNurseLocomotionAnimInstance::GetNurseAnimInstanceStateData() const {
    return NULL;
}


