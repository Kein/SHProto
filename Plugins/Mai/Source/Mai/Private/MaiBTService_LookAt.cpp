#include "MaiBTService_LookAt.h"

UMaiBTService_LookAt::UMaiBTService_LookAt() {
    this->NodeName = TEXT("Look at");
    this->_Priority = 1;
    this->_FocusType = EMaiFocusType::HeadOnly;
    this->_CheckConeRange = true;
    this->_ConeRange = -1.00f;
}


