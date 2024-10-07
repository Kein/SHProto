#include "SHInteractionManagerComponent.h"

USHInteractionManagerComponent::USHInteractionManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDoNotManageProximityGenerateOverlap = false;
    this->bDoNotPerformDefaultInitializationOnBeginPlay = false;
    this->ProximityDetector = NULL;
    this->VisibilityDetector = NULL;
}

void USHInteractionManagerComponent::SetObjectDetectionEnabled(const UObject* Object, const bool Enable, const UObject* Enabler) {
}

void USHInteractionManagerComponent::SetDetectionEnabled(const bool Enable, const UObject* Enabler) {
}

bool USHInteractionManagerComponent::RegisterGeneric(const USHInteractionGenericComponent* Generic, const USHRaycastDetectableComponent* Detectable, const USHInteractionIconComponent* Icon, const TArray<USHInteractionIconSlotComponent*>& Slots) {
    return false;
}

void USHInteractionManagerComponent::ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void USHInteractionManagerComponent::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void USHInteractionManagerComponent::PerformDefaultInitialization() {
}

bool USHInteractionManagerComponent::IsDetectionEnabled() const {
    return false;
}

void USHInteractionManagerComponent::InterruptCurrentInteraction() {
}

bool USHInteractionManagerComponent::HasUsableActorNearby() const {
    return false;
}

bool USHInteractionManagerComponent::HasActiveInteraction() const {
    return false;
}

void USHInteractionManagerComponent::BindVisibilityDetector(const USHRaycastDetectableComponent* NewVisibilityDetector) {
}

void USHInteractionManagerComponent::BindProximityDetector(const UShapeComponent* NewProximityDetector) {
}


