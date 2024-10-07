#include "MaiLookAtData.h"

FMaiLookAtData::FMaiLookAtData() {
    this->_Enabled = false;
    this->_OnlyHeadLookAt = false;
    this->_CheckConeRange = false;
    this->_ConeRange = 0.00f;
    this->_PitchLimit = 0.00f;
    this->_YawLimit = 0.00f;
    this->_RotationRate = 0.00f;
}

