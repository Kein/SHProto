#include "MaiCharacterMovementComponent.h"

UMaiCharacterMovementComponent::UMaiCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_CurrentWalkSpeed = 0.00f;
    this->_MaxSpeedStat = NULL;
    this->_SpeedMod = NULL;
    this->_Steering = NULL;
    this->_Acceleration = 100.00f;
    this->_CustomWalkSpeed = 200.00f;
    this->_UseCustomWalkSpeed = false;
    this->_ResetPitchAndRoll = false;
    this->_CanStrafe = false;
    this->_UseRMAvoidance = true;
    this->_HasRMLocomotion = false;
    this->_SideMovement = false;
    this->_AllowSideMovement = false;
    this->_SideMin = 1000.00f;
    this->_SideMax = 1000.00f;
    this->_SideDuration = 1.00f;
    this->_SideDurationMin = 1.00f;
    this->_SideDurationMax = 1.00f;
    this->_SideMinSpeed = 20.00f;
    this->ForwardMovementLimit = 1.00f;
    this->BackwardsMovementLimit = 1.00f;
    this->SidewaysMovementLimit = 1.00f;
}

void UMaiCharacterMovementComponent::SetSideMovement(bool Side) {
}

void UMaiCharacterMovementComponent::SetLimitedSidewaysMovement(float MaximumSidewaysMovement) {
}

void UMaiCharacterMovementComponent::SetLimitedMovement(float MaximumForwardMovement, float MaximumBackwardMovement, float MaximumSidewaysMovement) {
}

void UMaiCharacterMovementComponent::SetLimitedForwardMovement(float MaximumForwardMovement) {
}

void UMaiCharacterMovementComponent::SetLimitedBackwardsMovement(float MaximumBackwardsMovement) {
}

void UMaiCharacterMovementComponent::SetCustomWalkSpeed(float newSpeed) {
}

void UMaiCharacterMovementComponent::MoveToward(FVector move) {
}

float UMaiCharacterMovementComponent::GetMaxWalkSpeed() const {
    return 0.0f;
}

float UMaiCharacterMovementComponent::GetLimitedSidewaysMovement() const {
    return 0.0f;
}

float UMaiCharacterMovementComponent::GetLimitedForwardMovement() const {
    return 0.0f;
}

float UMaiCharacterMovementComponent::GetLimitedBackwardsMovement() const {
    return 0.0f;
}


