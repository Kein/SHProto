#include "SHMannequinStandingLocomotionAnimInstance.h"

USHMannequinStandingLocomotionAnimInstance::USHMannequinStandingLocomotionAnimInstance() {
    this->LocomotionState = ESHMannequinAnimInstanceStandingLocomotionState::Idle;
    this->MinimumWalkVelocity = 50.00f;
    this->RotationToStrafingRatio = 8.00f;
    this->MovementStopDelay = 0.10f;
    this->DesiredYawAdjustmentHalfTime = 0.20f;
    this->TargetDesiredRotationYaw = 0.00f;
    this->LookAtAlphaIncrementHalfTime = 0.50f;
    this->LookAtAlphaDecrementHalfTime = 0.25f;
}

void USHMannequinStandingLocomotionAnimInstance::GetTargetLookAtAlpha(float& OutAlpha) const {
}

void USHMannequinStandingLocomotionAnimInstance::GetTargetDesiredVelocitySizeAndYawLimitedToDirection(float& OutVelocitySize, float& OutVelocityYaw, float InDirectionYaw, float InToleranceAngle) const {
}

void USHMannequinStandingLocomotionAnimInstance::GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHMannequinStandingLocomotionAnimInstance::GetTargetDesiredVelocity(FVector& OutVelocity) const {
}

void USHMannequinStandingLocomotionAnimInstance::GetTargetDesiredRotationYaw(float& OutYaw) const {
}

void USHMannequinStandingLocomotionAnimInstance::GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const {
}

void USHMannequinStandingLocomotionAnimInstance::GetSmoothedDesiredVelocitySizeAndYawLimitedToDirection(float& OutVelocitySize, float& OutVelocityYaw, float InDirectionYaw, float InToleranceAngle) const {
}

void USHMannequinStandingLocomotionAnimInstance::GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHMannequinStandingLocomotionAnimInstance::GetSmoothedDesiredVelocity(FVector& OutVelocity) const {
}

void USHMannequinStandingLocomotionAnimInstance::GetSmoothedDesiredRotationYaw(float& OutYaw) const {
}


