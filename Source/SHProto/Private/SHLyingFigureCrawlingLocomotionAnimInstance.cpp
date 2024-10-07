#include "SHLyingFigureCrawlingLocomotionAnimInstance.h"

USHLyingFigureCrawlingLocomotionAnimInstance::USHLyingFigureCrawlingLocomotionAnimInstance() {
    this->DesiredYawAdjustmentHalfTime = 0.20f;
    this->TargetDesiredRotationYaw = 0.00f;
    this->LocomotionState = ESHLyingFigureAnimInstanceCrawlingLocomotionState::Idle;
}

void USHLyingFigureCrawlingLocomotionAnimInstance::GetTransformationToStandingAnimation_Implementation(const FRotator& InLocalRotation, UAnimSequenceBase*& OutAnimation, float& OutPlayRate, float& OutBlendInDuration, float& OutBlendOutDuration, FRotator& OutAnimationRotation, FRotator& OutRemainderRotation, bool& OutUsesDelayedRootRotation) const {
}

void USHLyingFigureCrawlingLocomotionAnimInstance::GetTargetDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHLyingFigureCrawlingLocomotionAnimInstance::GetTargetDesiredVelocity(FVector& OutVelocity) const {
}

void USHLyingFigureCrawlingLocomotionAnimInstance::GetTargetDesiredRotationYaw(float& OutYaw) const {
}

void USHLyingFigureCrawlingLocomotionAnimInstance::GetSmoothedDesiredVelocitySizeAndYaw(float& OutVelocitySize, float& OutVelocityYaw) const {
}

void USHLyingFigureCrawlingLocomotionAnimInstance::GetSmoothedDesiredVelocity(FVector& OutVelocity) const {
}

void USHLyingFigureCrawlingLocomotionAnimInstance::GetSmoothedDesiredRotationYaw(float& OutYaw) const {
}


