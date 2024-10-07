#include "SHJumpIntoHoleAnimInstance.h"

USHJumpIntoHoleAnimInstance::USHJumpIntoHoleAnimInstance() {
    this->bPlayInteraction = false;
    this->bAdvanceStage = false;
}

bool USHJumpIntoHoleAnimInstance::CanReceiveInput() const {
    return false;
}

void USHJumpIntoHoleAnimInstance::ApplyStageAdvanced() {
}

void USHJumpIntoHoleAnimInstance::ApplyInteractionStartedAndItsFinalStage() {
}

void USHJumpIntoHoleAnimInstance::ApplyInteractionStarted() {
}

void USHJumpIntoHoleAnimInstance::ApplyFinalStageReached() {
}


