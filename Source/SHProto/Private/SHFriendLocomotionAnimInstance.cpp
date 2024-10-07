#include "SHFriendLocomotionAnimInstance.h"

USHFriendLocomotionAnimInstance::USHFriendLocomotionAnimInstance() {
    this->LocomotionStateRequest = ESHFriendAnimInstanceLocomotionState::Idle;
    this->Speed = 0.00f;
    this->MovementPlayRate = 0.00f;
    this->MovementAnimationSpeed = 30.00f;
    this->MoveChangePlayRate = 0.00f;
    this->CircularMovementRadius = 0.00f;
    this->CircularMovementDirection = 0.00f;
    this->LeanValue = 0.00f;
    this->LeanInterpSpeed = 1.00f;
    this->TurnInPlaceAngle = 0.00f;
    this->AdditionalRotation = 0.00f;
    this->MoveChangeStrafeAngle = 0.00f;
    this->MoveChangeLegOnGround = 0.00f;
}

USHFriendAnimInstanceStateData* USHFriendLocomotionAnimInstance::GetFriendAnimInstanceStateData() const {
    return NULL;
}


