#include "SHAILitByAFlashlight.h"

USHAILitByAFlashlight::USHAILitByAFlashlight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->_ChargingDuration = 3.00f;
    this->_ChargingTime = 0.00f;
    this->_DecayCooldown = 1.00f;
    this->_DecaySpeed = 1.00f;
    this->_DecayTime = 0.00f;
    this->_IsFullyLit = false;
    this->_AngleCurve = NULL;
    this->_RangeCurve = NULL;
    this->_AngleAlpha = 0.00f;
    this->_RangeAlpha = 0.00f;
}

bool USHAILitByAFlashlight::isPointLitByAFlashlight(AActor* Owner, FVector Point, float& angleAlpha, float& rangeAlpha) {
    return false;
}

bool USHAILitByAFlashlight::IsLitByAFlashlight() {
    return false;
}

bool USHAILitByAFlashlight::IsFullyLit() const {
    return false;
}

void USHAILitByAFlashlight::DebugPrint() {
}


