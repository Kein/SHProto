#include "FootstepEffect.h"

FFootstepEffect::FFootstepEffect() {
    this->_FootMask = 0;
    this->_MoveDirection = EMoveDirection::ANY;
    this->_Particle = NULL;
    this->_DecalMaterial = NULL;
    this->_DecalLifeTime = 0.00f;
}

