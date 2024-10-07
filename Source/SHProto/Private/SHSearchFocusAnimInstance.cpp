#include "SHSearchFocusAnimInstance.h"

USHSearchFocusAnimInstance::USHSearchFocusAnimInstance() {
    this->bPlayInteraction = false;
    this->bAdvanceStage = false;
}

bool USHSearchFocusAnimInstance::CanReceiveInput() const {
    return false;
}

void USHSearchFocusAnimInstance::ApplyStageAdvanced() {
}

void USHSearchFocusAnimInstance::ApplyInteractionStartedAndItsFinalStage() {
}

void USHSearchFocusAnimInstance::ApplyInteractionStarted() {
}

void USHSearchFocusAnimInstance::ApplyFinalStageReached() {
}


