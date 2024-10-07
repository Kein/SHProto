#include "SHMQSpiderLocomotionAnimInstance.h"

USHMQSpiderLocomotionAnimInstance::USHMQSpiderLocomotionAnimInstance() {
    this->LocomotionStateRequest = ESHMQSpiderAnimInstanceLocomotionState::Idle;
    this->Speed = 0.00f;
    this->StrafeAngle = 0.00f;
    this->WallStrideScale = 1.00f;
    this->TurnInPlaceAngle = 0.00f;
}


