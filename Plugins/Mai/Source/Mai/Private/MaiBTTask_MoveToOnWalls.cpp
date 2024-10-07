#include "MaiBTTask_MoveToOnWalls.h"

UMaiBTTask_MoveToOnWalls::UMaiBTTask_MoveToOnWalls() {
    this->NodeName = TEXT("Move To (On Walls)");
    this->_AcceptableRadius = 10.00f;
    this->_OverlapAgent = true;
    this->_OverlapGoal = true;
    this->_TrackMovingGoal = true;
    this->_ProjectGoalLocation = true;
    this->_AllowStrafe = true;
    this->_ObservedBlackboardValueTolerance = 200.00f;
    this->_ObserveBlackboardValue = true;
    this->_MoveToAP = false;
    this->_RunActionsOnReach = true;
    this->_StanceFromActionPoint = true;
    this->_AvoidCountLimit = -1;
    this->_Following = NULL;
}


