#include "SHMaryLocomotionAnimInstance.h"

USHMaryLocomotionAnimInstance::USHMaryLocomotionAnimInstance() {
    this->LocomotionStateRequest = ESHMaryAnimInstanceLocomotionState::Idle;
    this->DesiredRotationYaw = 0.00f;
    this->DesiredStrafeAngle = 0.00f;
}


