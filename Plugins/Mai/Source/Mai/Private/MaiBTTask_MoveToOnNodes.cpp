#include "MaiBTTask_MoveToOnNodes.h"

UMaiBTTask_MoveToOnNodes::UMaiBTTask_MoveToOnNodes() {
    this->NodeName = TEXT("Move To (On Nodes)");
    this->_AcceptableRadius = 0.00f;
    this->_ObservedBlackboardValueTolerance = 200.00f;
    this->_ObserveBlackboardValue = true;
    this->_OnPathFail = EMaiOnPathFail::Nothing;
    this->_Following = NULL;
}


