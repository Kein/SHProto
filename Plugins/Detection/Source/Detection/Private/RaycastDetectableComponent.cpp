#include "RaycastDetectableComponent.h"

URaycastDetectableComponent::URaycastDetectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URaycastDetectableComponent::LoseDetectorsOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel) {
}

void URaycastDetectableComponent::LoseDetectors() {
}

bool URaycastDetectableComponent::IsUsingChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel, const bool MustBeEnabled) const {
    return false;
}

bool URaycastDetectableComponent::IsDetectedOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel) const {
    return false;
}

bool URaycastDetectableComponent::IsDetectedByActorOnChannel(AActor* Detector, const TEnumAsByte<ECollisionChannel> CollisionChannel) const {
    return false;
}

bool URaycastDetectableComponent::IsDetectedByActor(AActor* Detector) const {
    return false;
}

bool URaycastDetectableComponent::GetWasEverDetected() {
    return false;
}

ERaycastDetectableDistanceMethod URaycastDetectableComponent::GetDistanceMethodForChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel) const {
    return ERaycastDetectableDistanceMethod::Detector;
}

bool URaycastDetectableComponent::EnableDetectionOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return false;
}

void URaycastDetectableComponent::EnableDetection() {
}

bool URaycastDetectableComponent::DisableDetectionOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return false;
}

void URaycastDetectableComponent::DisableDetection() {
}

bool URaycastDetectableComponent::CanBeDetectedOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel) const {
    return false;
}

bool URaycastDetectableComponent::CanBeDetectedByActorOnChannel(AActor* Detector, const TEnumAsByte<ECollisionChannel> CollisionChannel, const float Distance) const {
    return false;
}

bool URaycastDetectableComponent::CanBeDetectedByActor(AActor* Detector, const float Distance) const {
    return false;
}


