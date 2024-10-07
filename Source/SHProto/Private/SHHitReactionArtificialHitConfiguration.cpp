#include "SHHitReactionArtificialHitConfiguration.h"

FSHHitReactionArtificialHitConfiguration::FSHHitReactionArtificialHitConfiguration() {
    this->HitReactionType = ESHHitReactionResponseType::Unknown;
    this->TransformationState = NULL;
    this->HitReactionStartTime = 0.00f;
}

