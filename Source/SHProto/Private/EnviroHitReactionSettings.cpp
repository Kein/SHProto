#include "EnviroHitReactionSettings.h"

FEnviroHitReactionSettings::FEnviroHitReactionSettings() {
    this->AllowedWhenWalking = false;
    this->AllowedWhenRunning = false;
    this->Audio = NULL;
    this->LookAtBlendOutSpeed = 0.00f;
    this->LookAtBlendInSpeed = 0.00f;
}

