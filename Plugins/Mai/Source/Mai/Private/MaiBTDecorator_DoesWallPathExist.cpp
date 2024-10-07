#include "MaiBTDecorator_DoesWallPathExist.h"

UMaiBTDecorator_DoesWallPathExist::UMaiBTDecorator_DoesWallPathExist() {
    this->NodeName = TEXT("Does wall path exist");
    this->PathQueryType = EMaiWallPathExistanceQueryType::PathFinding;
    this->filterClass = NULL;
}


