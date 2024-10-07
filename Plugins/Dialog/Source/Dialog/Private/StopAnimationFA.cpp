#include "StopAnimationFA.h"

UStopAnimationFA::UStopAnimationFA() {
    this->_DoOnSkip = false;
    this->_OverrideDoOnSkip = false;
    this->_SlotName = TEXT("DefaultSlot");
    this->_BlendOutTime = 0.25f;
}


