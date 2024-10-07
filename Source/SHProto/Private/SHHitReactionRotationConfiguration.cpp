#include "SHHitReactionRotationConfiguration.h"

FSHHitReactionRotationConfiguration::FSHHitReactionRotationConfiguration() {
    this->ApplyRotation = ESHHitReactionRotation::None;
    this->RotationDuration = 0.00f;
    this->bReplaceCurrentRotation = false;
}

