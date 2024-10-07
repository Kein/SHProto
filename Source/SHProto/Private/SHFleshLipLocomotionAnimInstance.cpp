#include "SHFleshLipLocomotionAnimInstance.h"

USHFleshLipLocomotionAnimInstance::USHFleshLipLocomotionAnimInstance() {
    this->RotationToStrafingRatio = 8.00f;
    this->MovementStopDelay = 0.10f;
    this->DesiredYawAdjustmentHalfTime = 0.20f;
    this->TargetDesiredRotationYaw = 0.00f;
    this->LookAtAlphaIncrementHalfTime = 0.50f;
    this->LookAtAlphaDecrementHalfTime = 0.25f;
}

void USHFleshLipLocomotionAnimInstance::GetTargetLookAtAlpha(float& OutAlpha) const {
}

void USHFleshLipLocomotionAnimInstance::GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHFleshLipLocomotionAnimInstance::GetTargetDesiredVelocity(FVector& OutVelocity) const {
}

void USHFleshLipLocomotionAnimInstance::GetTargetDesiredRotationYaw(float& OutYaw) const {
}

void USHFleshLipLocomotionAnimInstance::GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const {
}

void USHFleshLipLocomotionAnimInstance::GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHFleshLipLocomotionAnimInstance::GetSmoothedDesiredVelocity(FVector& OutVelocity) const {
}

void USHFleshLipLocomotionAnimInstance::GetSmoothedDesiredRotationYaw(float& OutYaw) const {
}

bool USHFleshLipLocomotionAnimInstance::GetFleshLipRightArmIsReleased() const {
    return false;
}

bool USHFleshLipLocomotionAnimInstance::GetFleshLipLegsAreReleased() const {
    return false;
}

bool USHFleshLipLocomotionAnimInstance::GetFleshLipLeftArmIsReleased() const {
    return false;
}

USHFleshLipAnimInstanceStateData* USHFleshLipLocomotionAnimInstance::GetFleshLipAnimInstanceStateData() const {
    return NULL;
}


