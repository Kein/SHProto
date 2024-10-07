#include "AreInSameLocation.h"

UAreInSameLocation::UAreInSameLocation() {
    this->_GeometricDistanceType = EDaiDistanceType::Distance2D5;
    this->_MaxDistance = 50.00f;
    this->_IncludeOverlapA = false;
    this->_IncludeOverlapB = false;
    this->_Fixed2 = false;
    this->_Fixed = false;
    this->_OverlapFirst = false;
    this->_OverlapSecond = false;
}


