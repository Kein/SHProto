#include "SHLocomotionAnimInstance.h"

USHLocomotionAnimInstance::USHLocomotionAnimInstance() {
    this->LocomotionState = ELocomotionState::Idle;
    this->bFullBodyAnimation = false;
    this->Speed = 0.00f;
    this->SpeedXY = 0.00f;
    this->MoveXYAngle = 0.00f;
    this->MoveDirection = 0.00f;
    this->StopImmediatelyRequested = false;
    this->StartImmediatelyRequested = false;
    this->PlayStopAnimationRequested = false;
    this->StopAnimationMoveDirection = 180.00f;
    this->LeanInterpSpeed = 1.00f;
    this->LeanMaxSpeedValue = 500.00f;
    this->bIdleCustomPlayRequested = false;
    this->PelvisOffsetInterpSpeed = 5.00f;
    this->FeetIKLockInterpSpeed = 4.00f;
    this->UseMoveDirectionDeadZonesMapping = true;
    this->MoveDirectionDeadZonesMapping.AddDefaulted(5);
    this->StateWeight_Move = 0.00f;
    this->StateWeight_IdleLoop = 0.00f;
    this->AnimTimeRemaining_IdleCustom = 0.00f;
}

float USHLocomotionAnimInstance::TryGetCurrentStateWeight(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) const {
    return 0.0f;
}

bool USHLocomotionAnimInstance::ShouldProcessRotateInPlace() const {
    return false;
}

bool USHLocomotionAnimInstance::ShouldMove() const {
    return false;
}

void USHLocomotionAnimInstance::SetForcedCloseToWallState(bool Enabled, UObject* RequestOwner) {
}

bool USHLocomotionAnimInstance::Rule_WalkToRun_Implementation() const {
    return false;
}

bool USHLocomotionAnimInstance::Rule_RunToWalk_Implementation() const {
    return false;
}

bool USHLocomotionAnimInstance::Rule_IdleDefaultToIdleCustom_Implementation() const {
    return false;
}

bool USHLocomotionAnimInstance::Rule_IdleCustomToIdleDefault_Implementation() const {
    return false;
}

void USHLocomotionAnimInstance::OnStopEnter() {
}

void USHLocomotionAnimInstance::OnMoveStateUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void USHLocomotionAnimInstance::OnMoveExit() {
}

void USHLocomotionAnimInstance::OnMoveEnter() {
}

void USHLocomotionAnimInstance::OnIdleLoopStateUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void USHLocomotionAnimInstance::OnIdleLoopExit() {
}

void USHLocomotionAnimInstance::OnIdleLoopEnter() {
}

void USHLocomotionAnimInstance::OnIdleExit() {
}

void USHLocomotionAnimInstance::OnIdleEnter() {
}

void USHLocomotionAnimInstance::OnIdleCustomStateUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void USHLocomotionAnimInstance::OnIdleCustomExit() {
}

void USHLocomotionAnimInstance::OnIdleCustomEnter() {
}

bool USHLocomotionAnimInstance::NotShouldMove() const {
    return false;
}

bool USHLocomotionAnimInstance::IsSprinting_WaterOverride() const {
    return false;
}

bool USHLocomotionAnimInstance::IsSprinting(bool OverrideIfInWater) const {
    return false;
}

bool USHLocomotionAnimInstance::IsObstacleDetected() const {
    return false;
}

bool USHLocomotionAnimInstance::IsMoving() const {
    return false;
}

bool USHLocomotionAnimInstance::IsInWater() const {
    return false;
}

bool USHLocomotionAnimInstance::IsInDangerMode() const {
    return false;
}

bool USHLocomotionAnimInstance::IsCloseToWall() const {
    return false;
}

bool USHLocomotionAnimInstance::IsCloseToEnemy() const {
    return false;
}

bool USHLocomotionAnimInstance::HasValidLookAtTarget() const {
    return false;
}

bool USHLocomotionAnimInstance::HasMovementInput() const {
    return false;
}

float USHLocomotionAnimInstance::GetQuantizedMoveDirection() const {
    return 0.0f;
}

float USHLocomotionAnimInstance::GetMoveDirection() const {
    return 0.0f;
}

ESHInteriorExteriorStateEnum USHLocomotionAnimInstance::GetInteriorExteriorState() const {
    return ESHInteriorExteriorStateEnum::Exterior;
}

ESHHealthStateEnum USHLocomotionAnimInstance::GetHealthState() const {
    return ESHHealthStateEnum::Default;
}

bool USHLocomotionAnimInstance::GetForcedCloseToWallState() const {
    return false;
}

ASHItemWeapon* USHLocomotionAnimInstance::GetEquippedWeapon() const {
    return NULL;
}

ESHMovementProfile USHLocomotionAnimInstance::GetCurrentMovementProfile() const {
    return ESHMovementProfile::Invalid;
}

float USHLocomotionAnimInstance::GetControlRotationYawDelta() const {
    return 0.0f;
}


