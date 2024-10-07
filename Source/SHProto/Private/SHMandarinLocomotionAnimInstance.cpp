#include "SHMandarinLocomotionAnimInstance.h"

USHMandarinLocomotionAnimInstance::USHMandarinLocomotionAnimInstance() {
    this->LocomotionStateRequest = ESHMandarinAnimInstanceLocomotionState::Idle;
    this->MoveChangeLegOnGround = 0.00f;
    this->MoveChangeStrafeAngle = 0.00f;
    this->StrafeAngle = 0.00f;
    this->DesiredStrafeAngle = 0.00f;
    this->TurnInPlaceAngle = 0.00f;
    this->TargetDesiredRotationYaw = 0.00f;
}

bool USHMandarinLocomotionAnimInstance::IsMandarinOver() {
    return false;
}

void USHMandarinLocomotionAnimInstance::GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const {
}

USHMandarinAnimInstanceStateData* USHMandarinLocomotionAnimInstance::GetMandarinAnimInstanceStateData() const {
    return NULL;
}

void USHMandarinLocomotionAnimInstance::GetDesiredVelocitySizeAndYaw(float& OutVectorSize, float& OutVectorYaw, float Smoothing) {
}

void USHMandarinLocomotionAnimInstance::CacheTurnInPlaceAngle() {
}


