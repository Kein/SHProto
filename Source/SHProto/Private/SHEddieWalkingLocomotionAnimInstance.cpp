#include "SHEddieWalkingLocomotionAnimInstance.h"

USHEddieWalkingLocomotionAnimInstance::USHEddieWalkingLocomotionAnimInstance() {
    this->LocomotionStateRequest = ESHEddieWalkingAnimInstanceLocomotionState::Idle;
    this->MovementStopDelay = 0.10f;
    this->DesiredYawAdjustmentHalfTime = 0.20f;
    this->TargetDesiredRotationYaw = 0.00f;
    this->LookAtAlphaIncrementHalfTime = 0.50f;
    this->LookAtAlphaDecrementHalfTime = 0.25f;
}

void USHEddieWalkingLocomotionAnimInstance::GetTargetLookAtAlpha(float& OutAlpha) const {
}

void USHEddieWalkingLocomotionAnimInstance::GetTargetDesiredVelocitySizeAndYawLimitedToDirection(float& OutVelocitySize, float& OutVelocityYaw, float InDirectionYaw, float InToleranceAngle) const {
}

void USHEddieWalkingLocomotionAnimInstance::GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHEddieWalkingLocomotionAnimInstance::GetTargetDesiredVelocity(FVector& OutVelocity) const {
}

void USHEddieWalkingLocomotionAnimInstance::GetTargetDesiredRotationYaw(float& OutYaw) const {
}

void USHEddieWalkingLocomotionAnimInstance::GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const {
}

void USHEddieWalkingLocomotionAnimInstance::GetSmoothedDesiredVelocitySizeAndYawLimitedToDirection(float& OutVelocitySize, float& OutVelocityYaw, float InDirectionYaw, float InToleranceAngle) const {
}

void USHEddieWalkingLocomotionAnimInstance::GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHEddieWalkingLocomotionAnimInstance::GetSmoothedDesiredVelocity(FVector& OutVelocity) const {
}

void USHEddieWalkingLocomotionAnimInstance::GetSmoothedDesiredRotationYaw(float& OutYaw) const {
}


