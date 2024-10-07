#include "MaiBTDecorator_DoesNodePathExist.h"

UMaiBTDecorator_DoesNodePathExist::UMaiBTDecorator_DoesNodePathExist() {
    this->NodeName = TEXT("Does node path exist");
    this->PathQueryType = EMaiNodePathExistanceQueryType::PathFinding;
    this->filterClass = NULL;
}


