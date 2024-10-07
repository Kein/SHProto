#include "ScreenDetectableComponent.h"

UScreenDetectableComponent::UScreenDetectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Quality = EScreenDetectableCheckQuality::Simple;
    this->UseTraces = false;
    this->TraceChannel = ECC_Visibility;
    this->LimitTraceRange = false;
    this->LimitTraceAngle = false;
    this->TraceAngle = 100.00f;
    this->StartEnabled = true;
    this->DrawDebug = false;
    this->CurrentStatus = EScreenDetectableStatus::NotDetected;
}

void UScreenDetectableComponent::SetDetectionEnabled(UObject* Object, const bool Enabled) {
}

bool UScreenDetectableComponent::IsDetectionEnabled() const {
    return false;
}

bool UScreenDetectableComponent::IsDetected() const {
    return false;
}

EScreenDetectableStatus UScreenDetectableComponent::GetCurrentStatus() const {
    return EScreenDetectableStatus::NotDetected;
}


