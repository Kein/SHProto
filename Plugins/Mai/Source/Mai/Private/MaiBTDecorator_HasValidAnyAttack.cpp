#include "MaiBTDecorator_HasValidAnyAttack.h"

UMaiBTDecorator_HasValidAnyAttack::UMaiBTDecorator_HasValidAnyAttack() {
    this->NodeName = TEXT("Has Valid Any Attack");
    this->_CheckCone = true;
    this->_StealToken = false;
    this->_MinCheckPeriod = 0.05f;
    this->_MaxCheckPeriod = 0.33f;
}


