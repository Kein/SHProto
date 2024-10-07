#include "SHCaterpillarCapsuleComponent.h"

USHCaterpillarCapsuleComponent::USHCaterpillarCapsuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CapsuleAnchorHeightScalar = 1.00f;
    this->bCapsuleStartsActivated = false;
    this->bCapsuleAvoidCollisions = false;
    this->TracingInitialLiftAngleHACK = 0.00f;
    this->TraceDensity = 1.00f;
    this->bSnapBackToCollision = false;
    this->bCapsuleAlignToSurface = false;
    this->CapsuleSurfaceAlignmentMargin = 5.00f;
    this->CapsuleSurfaceAlignmentIgnoreAnglesPast = 70.00f;
    this->CapsulSurfaceAlignmentTraceAtHeight = 0.00f;
    this->CapsuleSurfaceAlignmentTraceVectorPullback = 0.00f;
    this->bCapsuleAlignToSurfaceIgnorePawnChannel = true;
    this->bCapsuleAlignToSurfaceIgnorePawns = true;
    this->bCapsuleSurfaceAlignmentTraceForStairs = true;
    this->CapsuleSurfaceAlignmentTraceVectorExtensionForStairs = 25.00f;
    this->CapsuleSurfaceAlignmentInterpolationHalfTime = 0.00f;
    this->bInterpolateCapsuleRotation = true;
    this->bEnableIdleRotation = false;
    this->CapsuleRotationIdleInterpolationHalfTime = 0.25f;
    this->bEnableMovementRotation = false;
    this->CapsuleRotationMinimumInterpolationHalfTime = 1.00f;
    this->CapsuleRotationMaximumInterpolationHalfTime = 0.03f;
    this->CapsuleRotationAtMinimumVelocity = 0.00f;
    this->CapsuleRotationAtMaximumVelocity = 300.00f;
    this->CapsuleExtensionScalar = 1.00f;
    this->CapsuleExtensionSafetyMargin = 5.00f;
    this->CapsuleRadiusSafetyMargin = 0.00f;
    this->bDrawCollisionDebug = false;
    this->bDrawSurfaceAlignmentDebug = false;
    this->p_CachedConnectedCapsulesBaseLength = 0.00f;
    this->p_BaseCapsuleHalfHeightWithoutHemisphere = 0.00f;
}

bool USHCaterpillarCapsuleComponent::TraceCapsuleLocationAndRotationChange(const FVector& InTargetAnchorLocation, const FRotator& InTargetCapsuleRotation, float InPullbackRotationMultiplier, FVector& OutCapsuleLocation, FQuat& OutCapsuleRotation, FHitResult& OutHitResult) {
    return false;
}

void USHCaterpillarCapsuleComponent::SetCapsuleSurfaceAlignmentEnabled(bool InEnableAlignment) {
}

void USHCaterpillarCapsuleComponent::SetCapsuleParentAttachmentScalars(const FVector& InAttachmentScalars) {
}

void USHCaterpillarCapsuleComponent::SetCapsuleParentAttachmentOffset(const FVector& InAttachmentOffset) {
}

bool USHCaterpillarCapsuleComponent::SetCapsuleLocationAndRotationToDesired(bool InSweepCollisions) {
    return false;
}

bool USHCaterpillarCapsuleComponent::SetCapsuleLocationAndRotation(const FVector& InAnchorLocation, const FRotator& InCapsuleRotation, bool InSweepCollisions, float InPullbackRotationMultiplier) {
    return false;
}

void USHCaterpillarCapsuleComponent::SetCapsuleInterpolatingRotation(bool InInterpolate) {
}

void USHCaterpillarCapsuleComponent::SetCapsuleIdleRotationEnabled(bool InEnableIdleRotation) {
}

void USHCaterpillarCapsuleComponent::SetCapsuleDesiredExtensionScalar(float InScalar) {
}

void USHCaterpillarCapsuleComponent::SetCapsuleAvoidCollisions(bool InAvoidCollisions) {
}

void USHCaterpillarCapsuleComponent::SetCapsuleAnchorHeightScalar(float InAnchorScalar) {
}

void USHCaterpillarCapsuleComponent::SetCapsuleActivated(bool InActivated) {
}

void USHCaterpillarCapsuleComponent::SetBaseHalfHeightWithoutHemisphere(float InHalfHeightWithoutHemisphere) {
}

void USHCaterpillarCapsuleComponent::RetractCapsule() {
}

bool USHCaterpillarCapsuleComponent::ReExpandCapsuleAtDesiredLocationAndRotation() {
    return false;
}

float USHCaterpillarCapsuleComponent::GetDesiredCapsuleTopDistanceFromAnchor() const {
    return 0.0f;
}

float USHCaterpillarCapsuleComponent::GetDesiredCapsuleBottomDistanceFromAnchor() const {
    return 0.0f;
}

FQuat USHCaterpillarCapsuleComponent::GetCapsuleUnlyingWorldRotation() const {
    return FQuat{};
}

FQuat USHCaterpillarCapsuleComponent::GetCapsuleTargetAnchorWorldRotation() const {
    return FQuat{};
}

FVector USHCaterpillarCapsuleComponent::GetCapsuleTargetAnchorWorldLocation() const {
    return FVector{};
}

float USHCaterpillarCapsuleComponent::GetCapsuleTargetAnchorScalar() const {
    return 0.0f;
}

bool USHCaterpillarCapsuleComponent::GetCapsuleSurfaceAlignmentEnabled() const {
    return false;
}

float USHCaterpillarCapsuleComponent::GetCapsuleRadiusSafetyMargin() const {
    return 0.0f;
}

FQuat USHCaterpillarCapsuleComponent::GetCapsuleParentAttachmentDesiredRotationInActorSpace() const {
    return FQuat{};
}

FQuat USHCaterpillarCapsuleComponent::GetCapsuleLyingRotation() const {
    return FQuat{};
}

bool USHCaterpillarCapsuleComponent::GetCapsuleIsInterpolatingRotation() const {
    return false;
}

bool USHCaterpillarCapsuleComponent::GetCapsuleIsAvoidingCollisions() const {
    return false;
}

bool USHCaterpillarCapsuleComponent::GetCapsuleIsActivated() const {
    return false;
}

bool USHCaterpillarCapsuleComponent::GetCapsuleIdleRotationEnabled() const {
    return false;
}

void USHCaterpillarCapsuleComponent::GetCapsuleExtensionScalarsFromAnchor(float& OutTopScalar, float& OutBottomScalar, bool InClamped) const {
}

float USHCaterpillarCapsuleComponent::GetCapsuleExtensionSafetyMargin() const {
    return 0.0f;
}

float USHCaterpillarCapsuleComponent::GetCapsuleDesiredHalfHeightWithoutHemisphere() const {
    return 0.0f;
}

float USHCaterpillarCapsuleComponent::GetCapsuleCurrentExtensionScalar() const {
    return 0.0f;
}

void USHCaterpillarCapsuleComponent::ExpandCapsule() {
}


