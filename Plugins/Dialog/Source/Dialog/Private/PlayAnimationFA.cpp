#include "PlayAnimationFA.h"

UPlayAnimationFA::UPlayAnimationFA() {
    this->_DoOnSkip = false;
    this->_OverrideDoOnSkip = false;
    this->_CreateInstance = true;
    this->_NotifyStop = true;
    this->_SelectAnimByTag = false;
    this->_Animation = NULL;
    this->_Slot = TEXT("DefaultSlot");
    this->_BlendInTime = 0.25f;
    this->_BlendOutTime = 0.25f;
    this->_LoopCount = 1;
}


