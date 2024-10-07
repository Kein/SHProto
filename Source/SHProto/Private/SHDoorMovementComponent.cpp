#include "SHDoorMovementComponent.h"

USHDoorMovementComponent::USHDoorMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->BeginPlayAngle = 0.00f;
    this->ClosedAngle = 0.00f;
    this->OpenedAngle = 90.00f;
    this->OpenBothSides = true;
    this->OtherSideOpenedAngle = -90.00f;
    this->bFrozenOnBegin = false;
    this->FakeMovementSpeed = 2.00f;
    this->FakeMovementBlendExp = 2.00f;
    this->MaxPushingAngle = 85.00f;
    this->HitForceMod = 1.00f;
    this->VelocityDecreaserMod = 1.00f;
    this->MaxMoveVelocity = 400.00f;
    this->bUseAutoclose = true;
    this->AutocloseCharacterDetectorRange = 250.00f;
    this->bPushEnemyActive = true;
    this->PushingSpeed = 150.00f;
    this->bHitTurnSpirntOff = false;
    this->ManagedPreHitDetector = NULL;
    this->bIsDoorFrozen = false;
    this->DoorAngleSave = 0.00f;
}

bool USHDoorMovementComponent::WasPhysicMovingLastTick() const {
    return false;
}

void USHDoorMovementComponent::StopCurveAnim() {
}

void USHDoorMovementComponent::SetDoorFrozen(bool NewValue) {
}

void USHDoorMovementComponent::SetAutocloseBlocked(const bool Blocked, const UObject* Object) {
}

bool USHDoorMovementComponent::RequestFakeOpen(const bool ToOtherside) {
    return false;
}

bool USHDoorMovementComponent::RequestFakeClose() {
    return false;
}

bool USHDoorMovementComponent::RequestCustomFakeMovement(const float InAngleTarget, const float InSpeed, const float InBlendExp, const bool InForceMovement) {
    return false;
}

void USHDoorMovementComponent::PlayCurveAnim(UCurveFloat* InCurve, bool InSkipTracing) {
}

bool USHDoorMovementComponent::IsPreHitOverlapingCharacterPlay() const {
    return false;
}

bool USHDoorMovementComponent::IsPreHitOverlapingAnyCharacter() const {
    return false;
}

bool USHDoorMovementComponent::IsPlayingCurveAnim() const {
    return false;
}

bool USHDoorMovementComponent::IsDoorFrozen() const {
    return false;
}

bool USHDoorMovementComponent::IsAutocloseBlocked() const {
    return false;
}

bool USHDoorMovementComponent::HasPhysicForce() const {
    return false;
}

float USHDoorMovementComponent::GetMaxDoorVelocity() const {
    return 0.0f;
}

ESHDoorStateEnum USHDoorMovementComponent::GetFakeMovementTargetState() const {
    return ESHDoorStateEnum::Undefined;
}

float USHDoorMovementComponent::GetFakeMovementTargetAngle() const {
    return 0.0f;
}

FVector USHDoorMovementComponent::GetDoorTraceLoc(float DoorTraceAngle) const {
    return FVector{};
}

float USHDoorMovementComponent::GetCurrentDoorAngle() const {
    return 0.0f;
}

void USHDoorMovementComponent::AddPhysicForce(const float MoveForce) {
}

void USHDoorMovementComponent::AddActorToTraceIgnoreActors(AActor* InActor) {
}


