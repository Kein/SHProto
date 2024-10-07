#include "SHLyingFigureStandingLocomotionAnimInstance.h"

USHLyingFigureStandingLocomotionAnimInstance::USHLyingFigureStandingLocomotionAnimInstance() {
    this->LocomotionState = ESHLyingFigureAnimInstanceStandingLocomotionState::Idle;
    this->DesiredYawAdjustmentHalfTime = 0.20f;
    this->TargetDesiredRotationYaw = 0.00f;
    this->LookAtAlphaIncrementHalfTime = 0.50f;
    this->LookAtAlphaDecrementHalfTime = 0.25f;
    this->StruggleAlphaIncrementHalfTime = 0.50f;
    this->StruggleAlphaDecrementHalfTime = 0.25f;
    this->SmoothedStruggleAlpha = 0.00f;
    this->StrugglePlayRate = 0.10f;
}

void USHLyingFigureStandingLocomotionAnimInstance::SetStruggle(float ALPHA, float PlayRate) {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetTransformationToCrawlingAnimation_Implementation(const FRotator& InLocalRotation, UAnimSequenceBase*& OutAnimation, float& OutPlayRate, float& OutBlendInDuration, float& OutBlendOutDuration, FRotator& OutAnimaitonRotation, FRotator& OutRemainderRotation, bool& OutUsesDelayedRootRotation) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetTargetStruggleAlpha(float& OutAlpha) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetTargetLookAtAlpha(float& OutAlpha) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetTargetDesiredVelocity(FVector& OutVelocity) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetTargetDesiredRotationYaw(float& OutYaw) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetSmoothedStruggle(float& OutPlayRate, float& OutAlpha) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetSmoothedDesiredVelocity(FVector& OutVelocity) const {
}

void USHLyingFigureStandingLocomotionAnimInstance::GetSmoothedDesiredRotationYaw(float& OutYaw) const {
}


