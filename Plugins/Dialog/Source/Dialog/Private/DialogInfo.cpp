#include "DialogInfo.h"

FDialogInfo::FDialogInfo() {
    this->_IgnoreRange = false;
    this->_IgnoreSubtitleRange = false;
    this->_SingleLine = false;
    this->_Interactive = false;
    this->_Unmanaged = false;
    this->_Priotrity = 0;
    this->_InterruptPriority = 0;
    this->_SubtitleRange = 0.00f;
    this->_DialogRange = 0.00f;
    this->_OnlyManualSkip = false;
}

