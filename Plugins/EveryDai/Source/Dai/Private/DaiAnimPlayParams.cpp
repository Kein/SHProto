#include "DaiAnimPlayParams.h"

FDaiAnimPlayParams::FDaiAnimPlayParams() {
    this->_Weight = 0;
    this->_Angle = 0.00f;
    this->_Anim = NULL;
    this->_PlayRate = 0.00f;
    this->_TimeToStartAt = 0.00f;
    this->_BlendOutTriggerTime = 0.00f;
    this->_IsMontage = false;
    this->_BlendInTime = 0.00f;
    this->_BlendOutTime = 0.00f;
}

