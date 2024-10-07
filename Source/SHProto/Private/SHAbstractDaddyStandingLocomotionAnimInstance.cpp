#include "SHAbstractDaddyStandingLocomotionAnimInstance.h"

USHAbstractDaddyStandingLocomotionAnimInstance::USHAbstractDaddyStandingLocomotionAnimInstance() {
    this->LocomotionState = ESHAbstractDaddyAnimInstanceStandingLocomotionState::Idle;
    this->RotationToStrafingRatio = 8.00f;
    this->MovementStopDelay = 0.10f;
    this->MovementStopVelocity = 15.00f;
    this->DesiredYawAdjustmentHalfTime = 0.20f;
    this->TargetDesiredRotationYaw = 0.00f;
    this->LookAtAlphaIncrementHalfTime = 0.50f;
    this->LookAtAlphaDecrementHalfTime = 0.25f;
    this->BrakingVelocity = 100.00f;
}

void USHAbstractDaddyStandingLocomotionAnimInstance::GetTargetLookAtAlpha(float& OutAlpha) const {
}

void USHAbstractDaddyStandingLocomotionAnimInstance::GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHAbstractDaddyStandingLocomotionAnimInstance::GetTargetDesiredVelocity(FVector& OutVelocity) const {
}

void USHAbstractDaddyStandingLocomotionAnimInstance::GetTargetDesiredRotationYaw(float& OutYaw) const {
}

void USHAbstractDaddyStandingLocomotionAnimInstance::GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const {
}

void USHAbstractDaddyStandingLocomotionAnimInstance::GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHAbstractDaddyStandingLocomotionAnimInstance::GetSmoothedDesiredVelocity(FVector& OutVelocity) const {
}

void USHAbstractDaddyStandingLocomotionAnimInstance::GetSmoothedDesiredRotationYaw(float& OutYaw) const {
}


