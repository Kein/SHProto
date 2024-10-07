#include "SHPushingObjectAnimInstance.h"

USHPushingObjectAnimInstance::USHPushingObjectAnimInstance() {
    this->bPlayInteraction = false;
    this->bFinishInteraction = false;
    this->bIsMovementBlocked = false;
    this->DebugHandleShapeRadius = 2.00f;
}


FVector USHPushingObjectAnimInstance::GetBlockedInputValue() const {
    return FVector{};
}

void USHPushingObjectAnimInstance::ApplyMovementStopped(const FVector StoppedMovementInput) {
}

void USHPushingObjectAnimInstance::ApplyInteractionStarted() {
}

void USHPushingObjectAnimInstance::ApplyInteractionFinishFired() {
}

void USHPushingObjectAnimInstance::ApplyInteractionFinished() {
}

void USHPushingObjectAnimInstance::ApplyAnyMovementStarted() {
}


