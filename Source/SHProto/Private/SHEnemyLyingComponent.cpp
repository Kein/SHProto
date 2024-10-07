#include "SHEnemyLyingComponent.h"

USHEnemyLyingComponent::USHEnemyLyingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMoveMeshPivot = true;
    this->TreatBaseMeshPivotHeightAsCapsuleScale = 1.00f;
    this->bMoveMesh = true;
    this->TreatBaseMeshHeightAsCapsuleScale = 1.00f;
    this->bAutoAssignLyingCapsules = true;
    this->LyingMeshAnchorMultiplier = 1.00f;
    this->LyingMeshAnchorHeightOffset = 5.00f;
    this->MaximumLyingPitchAngle = 60.00f;
    this->MinimumLyingPitchAngle = -60.00f;
    this->ActorRotationToDesiredVelocityHalfTime = 0.05f;
    this->ActorRotationAllowUsingCurrentVelocityHACK = false;
    this->LyingCapsuleComponent = NULL;
}

void USHEnemyLyingComponent::TransformToStanding(FName InTransformationReason, float InTransformationDuration, bool InDisableAIDuringTransformation, bool InPreventControllerRotation, bool InRotateActorToDesiredVelocity, bool InRotateActorToLyingCapsule, bool InForceRestart) {
}

void USHEnemyLyingComponent::TransformToLying(FName InTransformationReason, float InTransformationDuration, bool InDelayedRootRotation, bool InDisableAIDuringTransformation, bool InPreventControllerRotation, bool InRotateActorToDesiredVelocity, bool InRotateOutOfCollisionsDuringTransformation, bool InRotateOutOfCollisionsAfterTransformation, float InCapsuleAnchorPosition, float InMaximumCapsuleExtensionAlpha, bool InAlignCapsulesToSurface, bool InForceRestart) {
}

void USHEnemyLyingComponent::SetManuallyDisabledLyingCapsuleCollisions(bool InDisableCollisions) {
}

void USHEnemyLyingComponent::SetLyingCapsulePosition(float InAnchorPosition, float InMaximumExtension) {
}

void USHEnemyLyingComponent::SetActorRotationAllowUsingCurrentVelocityHACK(bool InAllowVelocityHack) {
}

void USHEnemyLyingComponent::PostTeleportUpdate(bool InReExpandCapsules) {
}

bool USHEnemyLyingComponent::IsTransformingIntoStanding() const {
    return false;
}

bool USHEnemyLyingComponent::IsTransformingIntoLying() const {
    return false;
}

bool USHEnemyLyingComponent::IsTransforming() const {
    return false;
}

bool USHEnemyLyingComponent::IsTransformationWantingToPreventControllerRotation() const {
    return false;
}

bool USHEnemyLyingComponent::IsTransformationWantingDisabledAI() const {
    return false;
}

bool USHEnemyLyingComponent::IsTransformationAwaitingDelayedRootRotation() const {
    return false;
}

bool USHEnemyLyingComponent::IsStanding(bool InIncludeTransformingInto, bool InIncludeTransformingOutOf) const {
    return false;
}

bool USHEnemyLyingComponent::IsLying(bool InIncludeTransformingInto, bool InIncludeTransformingOutOf) const {
    return false;
}

float USHEnemyLyingComponent::GetTransformationProgress() const {
    return 0.0f;
}

float USHEnemyLyingComponent::GetTransformationAlpha() const {
    return 0.0f;
}

float USHEnemyLyingComponent::GetRemainingTransformationDuration() const {
    return 0.0f;
}

void USHEnemyLyingComponent::GetLyingExtensionScalars(float& OutTopScalar, float& OutBottomScalar, bool InClamped) const {
}

void USHEnemyLyingComponent::FinishDelayedRootRotation() {
}

void USHEnemyLyingComponent::AssignLyingCapsule(USHCaterpillarCapsuleComponent* InLyingCapsule) {
}

void USHEnemyLyingComponent::AddAdditionalExtendingCapsule(USHCaterpillarCapsuleComponent* InLyingCapsule) {
}


