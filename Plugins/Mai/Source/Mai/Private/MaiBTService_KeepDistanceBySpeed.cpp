#include "MaiBTService_KeepDistanceBySpeed.h"

UMaiBTService_KeepDistanceBySpeed::UMaiBTService_KeepDistanceBySpeed() {
    this->NodeName = TEXT("Keep Distance by Speed");
    this->_LocationOffset = 0.00f;
    this->_SpeedInterpolation = 10.00f;
    this->_MinSpeed = 0.00f;
    this->_Debug = false;
}


