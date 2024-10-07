#include "SHValveAnimInstance.h"

USHValveAnimInstance::USHValveAnimInstance() {
    this->bPlayInteraction = false;
    this->bProcessInteraction = false;
    this->bFinishInteraction = false;
}

bool USHValveAnimInstance::CanReceiveInput() const {
    return false;
}

void USHValveAnimInstance::ApplyInteractionStarted() {
}

void USHValveAnimInstance::ApplyInteractionSecondPhaseStarted() {
}

void USHValveAnimInstance::ApplyInteractionSecondPhaseEnded() {
}

void USHValveAnimInstance::ApplyInteractionFirstPhaseStarted() {
}

void USHValveAnimInstance::ApplyInteractionFirstPhaseEnded() {
}

void USHValveAnimInstance::ApplyInteractionFinished() {
}

void USHValveAnimInstance::ApplyInteractionFinishBegin() {
}


