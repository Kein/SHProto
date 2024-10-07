#include "MaiBTDecorator_CheckAttack.h"

UMaiBTDecorator_CheckAttack::UMaiBTDecorator_CheckAttack() {
    this->NodeName = TEXT("Check Attack");
    this->_AttackFromKey = false;
    this->_CheckRange = true;
    this->_CheckCone = true;
    this->_CheckVisibility = true;
    this->_StealToken = false;
}


