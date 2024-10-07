#include "FootstepLoudness.h"

FFootstepLoudness::FFootstepLoudness() {
    this->_AINoiseModifier = 0.00f;
    this->_Curve = NULL;
    this->_NormalizedCurve = false;
    this->_MaxSpeed = 0.00f;
}

