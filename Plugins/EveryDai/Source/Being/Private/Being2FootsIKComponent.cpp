#include "Being2FootsIKComponent.h"

UBeing2FootsIKComponent::UBeing2FootsIKComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_ClampInCapsule = true;
    this->_LeftFootOffset = 0.00f;
    this->_RightFootOffset = 0.00f;
    this->_TimeToNextStep = 0.00f;
    this->_PredictionCollisionChannel = ECC_WorldStatic;
    this->_EnablePredictions = false;
    this->_OldIKUpdate = true;
    this->_IKTryUseCache = true;
    this->_DropTryUseCache = true;
    this->_IKInterpEaseIn = true;
    this->_DropInterpEaseIn = true;
    this->_DynamicDropInterp = true;
    this->_InterpEaseMin = 20.00f;
    this->_InterpEaseSpeed = 980.00f;
    this->_WeldGround = 0.00f;
    this->_StairStepHeight = 0.00f;
    this->_MaxAllowedAngle = 20.00f;
    this->_WalkStepDuration = 0.50f;
    this->_WalkStepLength = 70.20f;
    this->_RunStepDuration = 0.40f;
    this->_RunStepLength = 71.20f;
    this->_WalkUpStairsPlayRate = 1.10f;
    this->_WalkDownStairsPlayRate = 1.10f;
    this->_RunUpStairsPlayRate = 1.40f;
    this->_RunDownStairsPlayRate = 1.40f;
}

bool UBeing2FootsIKComponent::IsOnUpStairs() const {
    return false;
}

bool UBeing2FootsIKComponent::IsOnStairs() const {
    return false;
}

bool UBeing2FootsIKComponent::IsOnSlope() const {
    return false;
}

bool UBeing2FootsIKComponent::IsOnDownStairs() const {
    return false;
}

float UBeing2FootsIKComponent::GetSpeedWarping() const {
    return 0.0f;
}

FFootData UBeing2FootsIKComponent::GetRightFootData() const {
    return FFootData{};
}

FFootData UBeing2FootsIKComponent::GetLeftFootData() const {
    return FFootData{};
}

void UBeing2FootsIKComponent::GetAnimMods(float& PlayRate, float& speedWarping) const {
}

void UBeing2FootsIKComponent::ExitStairs() {
}

void UBeing2FootsIKComponent::ExitSlope() {
}

void UBeing2FootsIKComponent::EnterStairs(float stepHeight) {
}

void UBeing2FootsIKComponent::EnterSlope(float stepHeight) {
}


