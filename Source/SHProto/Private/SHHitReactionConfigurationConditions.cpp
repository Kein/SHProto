#include "SHHitReactionConfigurationConditions.h"

FSHHitReactionConfigurationConditions::FSHHitReactionConfigurationConditions() {
    this->PassChance = 0.00f;
    this->bAllowForDirectionalHits = false;
    this->bAllowForSurfaceHits = false;
    this->bAllowForRadialHits = false;
    this->bCheckWallAngle = false;
}

