#include "MaiBTDecorator_AreInSameLocation.h"

UMaiBTDecorator_AreInSameLocation::UMaiBTDecorator_AreInSameLocation() {
    this->NodeName = TEXT("Are In Same Location");
    this->GeometricDistanceType = EDaiDistanceType::Distance2D5;
    this->_IncludeOverlapA = false;
    this->_IncludeOverlapB = false;
}


