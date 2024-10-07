#include "SHBaseStagedAnimInstance.h"

USHBaseStagedAnimInstance::USHBaseStagedAnimInstance() {
    this->bPlayInteraction = false;
    this->bAdvanceStage = false;
    this->bPlayFinish = false;
}

bool USHBaseStagedAnimInstance::CanAdvanceStage() const {
    return false;
}

void USHBaseStagedAnimInstance::ApplyStageAdvanced() {
}

void USHBaseStagedAnimInstance::ApplyInteractionStarted() {
}

void USHBaseStagedAnimInstance::ApplyInteractionFinished() {
}

void USHBaseStagedAnimInstance::ApplyInteractionBlendingOut() {
}


