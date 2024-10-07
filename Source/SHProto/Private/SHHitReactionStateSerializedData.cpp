#include "SHHitReactionStateSerializedData.h"

FSHHitReactionStateSerializedData::FSHHitReactionStateSerializedData() {
    this->bStateStartedManually = false;
    this->RemainingDuration = 0.00f;
    this->StateHitReactionType = ESHHitReactionResponseType::Unknown;
    this->bStateWantsToBlockAI = false;
    this->bStateWantsToPreventControllerRotation = false;
}

