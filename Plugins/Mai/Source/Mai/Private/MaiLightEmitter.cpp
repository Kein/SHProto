#include "MaiLightEmitter.h"

UMaiLightEmitter::UMaiLightEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Enabled = false;
    this->_AutoRegister = true;
    this->_CastLightRays = false;
    this->_RayCount = 12;
    this->_Angle = 360.00f;
    this->_Range = 500.00f;
    this->_RayRadius = 0.00f;
    this->_PointRange = 74.00f;
    this->_YawPeriod = 0.00f;
    this->_FirstValidRay = 0;
    this->_NextRay = 0;
    this->_AIHalfAngle = 70.00f;
    this->_AIRange = 900.00f;
    this->_TraceChannel = ECC_Visibility;
}

void UMaiLightEmitter::TurnOffLight() {
}

void UMaiLightEmitter::TestLight() {
}

void UMaiLightEmitter::SetRange(float Range) {
}

void UMaiLightEmitter::SetAngle(float Angle) {
}

void UMaiLightEmitter::LightLight() {
}

bool UMaiLightEmitter::IsInLight(FVector Location, float Radius, float hheight, FRotator Rotation) {
    return false;
}


