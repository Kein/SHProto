#include "MaiWasPushedState.h"

UMaiWasPushedState::UMaiWasPushedState() {
    this->_CanBePushed = true;
    this->_Other = NULL;
    this->_BBAwayFocus = TEXT("AwayFocus");
}

bool UMaiWasPushedState::IsBlockedByOther() const {
    return false;
}


