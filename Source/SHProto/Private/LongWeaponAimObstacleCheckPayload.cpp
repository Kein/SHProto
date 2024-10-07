#include "LongWeaponAimObstacleCheckPayload.h"

FLongWeaponAimObstacleCheckPayload::FLongWeaponAimObstacleCheckPayload() {
    this->WeaponStartSocketData = NULL;
    this->WeaponEndSocketData = NULL;
    this->ArmsAimOffsetX = 0.00f;
    this->ArmsAimOffsetXRangeMin = 0.00f;
    this->ArmsAimOffsetXRangeMax = 0.00f;
    this->SweepRadius = 0.00f;
    this->ShowDebug = false;
    this->ALPHA = 0.00f;
    this->CurveTimeMin = 0.00f;
    this->CurveTimeMax = 0.00f;
}

