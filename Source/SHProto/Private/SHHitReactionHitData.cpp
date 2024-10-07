#include "SHHitReactionHitData.h"

FSHHitReactionHitData::FSHHitReactionHitData() {
    this->DamageType = NULL;
    this->ResponseType = ESHHitReactionResponseType::Unknown;
    this->DurationLimit = 0.00f;
    this->HitType = ESHHitReactionHitType::Directional;
    this->DamageCauser = NULL;
    this->HitComponent = NULL;
    this->HitBoneShapeIndex = 0;
}

