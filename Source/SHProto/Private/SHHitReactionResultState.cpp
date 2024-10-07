#include "SHHitReactionResultState.h"

FSHHitReactionResultState::FSHHitReactionResultState() {
    this->HitReactionType = ESHHitReactionResponseType::Unknown;
    this->StateDuration = 0.00f;
    this->SkipToDuration = 0.00f;
    this->bDisableAI = false;
    this->bDisableControllerRotation = false;
}

