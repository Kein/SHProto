#include "SHPHLocomotionAnimInstance.h"

USHPHLocomotionAnimInstance::USHPHLocomotionAnimInstance() {
    this->LocomotionStateRequest = ESHPHAnimInstanceLocomotionState::Idle;
    this->DesiredSpeed = 0.00f;
    this->DesiredStrafeAngle = 0.00f;
    this->bUseTurnInPlace = false;
    this->MovementSpeedMultiplierTarget = 1.00f;
    this->MovementSpeedMultiplierCurrent = 1.00f;
    this->MovementSpeedMultiplierTime = 0.00f;
    this->MovementSpeedMultiplierTimer = 1.00f;
    this->MovementSpeedMultiplierBlendInSpeed = 5.00f;
    this->MovementSpeedMultiplierBlendOutSpeed = 5.00f;
    this->MoveChangeLegOnGround = 0.00f;
    this->MoveChangeStrafeAngle = 0.00f;
    this->TurnInPlaceAngle = 0.00f;
    this->LookAtAngleYaw = 0.00f;
    this->bLookAtTarget = true;
}

void USHPHLocomotionAnimInstance::SetMovementSpeedMultiplier(float NewMovementSpeed, float Time, float BlendInTime, float BlendOutTime) {
}

void USHPHLocomotionAnimInstance::SetLookAtEnable(bool NewLookAtEnable) {
}

void USHPHLocomotionAnimInstance::SetLookAtAngle(FVector LookAtTargetLocation) {
}

USHPHAnimInstanceStateData* USHPHLocomotionAnimInstance::GetPHAnimInstanceStateData() const {
    return NULL;
}


