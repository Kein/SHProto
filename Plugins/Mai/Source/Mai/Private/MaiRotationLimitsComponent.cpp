#include "MaiRotationLimitsComponent.h"

UMaiRotationLimitsComponent::UMaiRotationLimitsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_MinPitch = -90.00f;
    this->_MaxPitch = 90.00f;
    this->_MinYaw = -360.00f;
    this->_MaxYaw = 360.00f;
    this->_MinRoll = 0.00f;
    this->_MaxRoll = 0.00f;
}


