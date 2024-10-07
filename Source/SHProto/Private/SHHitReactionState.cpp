#include "SHHitReactionState.h"

USHHitReactionState::USHHitReactionState() {
    this->HitReactionStateContext = NULL;
}

bool USHHitReactionState::StartFinishingState() {
    return false;
}

bool USHHitReactionState::IsStateInProgress(bool InIncludeFinishing) const {
    return false;
}

bool USHHitReactionState::IsStateFinishing() const {
    return false;
}

bool USHHitReactionState::HasStateStarted() const {
    return false;
}

bool USHHitReactionState::HasStateEnded() const {
    return false;
}

FName USHHitReactionState::GetStateHitReactionVariant() const {
    return NAME_None;
}

ESHHitReactionResponseType USHHitReactionState::GetStateHitReactionType() const {
    return ESHHitReactionResponseType::Unknown;
}

void USHHitReactionState::GetStateHitReactionIdentifier(FSHHitReactionIdentifier& OutIdentifier) const {
}

float USHHitReactionState::GetRemainingStateDuration() const {
    return 0.0f;
}

bool USHHitReactionState::CancelState(bool InInstant) {
    return false;
}

void USHHitReactionState::BoundAnimationEnded(UAnimMontage* InMontage, ESHAnimEndType InAnimEndType) {
}

void USHHitReactionState::BoundAnimationBlendingOut(UAnimMontage* InMontage, ESHAnimEndType InAnimEndType) {
}


