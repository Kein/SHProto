#include "Being4FootsIKComponent.h"

UBeing4FootsIKComponent::UBeing4FootsIKComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_OnlyDropIK = false;
    this->_ChestOffset = 0.00f;
    this->_HipOffset = 0.00f;
    this->_FootDropDists[0] = 0.00f;
    this->_FootDropDists[1] = 0.00f;
    this->_FootDropDists[2] = 0.00f;
    this->_FootDropDists[3] = 0.00f;
    this->_Lenght = 55.00f;
    this->_MaxPitch = 45.00f;
    this->_MeshPitch = 0.00f;
}

bool UBeing4FootsIKComponent::IsOnSlope(float toleranceAngle) const {
    return false;
}

FFootData UBeing4FootsIKComponent::GetRightFrontFoot() const {
    return FFootData{};
}

FFootData UBeing4FootsIKComponent::GetRightBackFoot() const {
    return FFootData{};
}

FFootData UBeing4FootsIKComponent::GetLeftFrontFoot() const {
    return FFootData{};
}

FFootData UBeing4FootsIKComponent::GetLeftBackFoot() const {
    return FFootData{};
}


