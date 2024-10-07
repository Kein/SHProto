#include "SHAIAction_Struggle.h"

USHAIAction_Struggle::USHAIAction_Struggle() {
    this->_ActionName = TEXT("Action_NuStruggle");
    this->_HideWeapon = true;
    this->_HardLockTokens = false;
    this->_LoopCount = 3;
    this->_DecayPerSecond = 0.50f;
    this->_PointsPerClick = 0.20f;
    this->_PointsPerHoldSecond = 0.20f;
    this->_LoopsToDo = 0;
    this->_StruggleSubcomp = NULL;
    this->_Escaped = false;
    this->_IsInLoop = false;
}


