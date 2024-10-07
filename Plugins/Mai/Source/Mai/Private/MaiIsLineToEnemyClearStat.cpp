#include "MaiIsLineToEnemyClearStat.h"

UMaiIsLineToEnemyClearStat::UMaiIsLineToEnemyClearStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_DrawDebugType = EDrawDebugTrace::None;
    this->_DrawTime = 5.00f;
    this->_Profile = TEXT("Pawn");
    this->_Radius = 33.00f;
}


