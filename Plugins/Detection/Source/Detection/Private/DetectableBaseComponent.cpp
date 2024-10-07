#include "DetectableBaseComponent.h"

UDetectableBaseComponent::UDetectableBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Shape = NULL;
    this->DiscoveryMethod = EDetectableShapeDiscoveryMethod::None;
    this->DiscoveryScope = EDetectableShapeDiscoveryScope::Children;
    this->SelectedShape = NULL;
}

bool UDetectableBaseComponent::HasShape() const {
    return false;
}

USphereComponent* UDetectableBaseComponent::GetShapeAsSphere() {
    return NULL;
}

UCapsuleComponent* UDetectableBaseComponent::GetShapeAsCapsule() {
    return NULL;
}

UBoxComponent* UDetectableBaseComponent::GetShapeAsBox() {
    return NULL;
}

UShapeComponent* UDetectableBaseComponent::GetShape() {
    return NULL;
}

bool UDetectableBaseComponent::ContainsPoint(const FVector WorldLocation) const {
    return false;
}

void UDetectableBaseComponent::BindShape(UShapeComponent* NewShape) {
}


