#include "SHWaterInteractionComponent.h"

USHWaterInteractionComponent::USHWaterInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsWaterInteractionEnabled = true;
    this->TrackOwnerEnabled = false;
    this->OwnerRadius = 10.00f;
    this->OwnerEffectType = ESimulatedWaterEffectType::DEFAULT;
}

void USHWaterInteractionComponent::SetWaterInteractionBlocked(const bool IsBlock, const UObject* Object) {
}

bool USHWaterInteractionComponent::IsWaterInteractionBlockedBy(const UObject* Object) const {
    return false;
}

bool USHWaterInteractionComponent::IsWaterInteractionBlocked() const {
    return false;
}

TArray<FSHXWaterIntersection> USHWaterInteractionComponent::GetCurrentIntersections() const {
    return TArray<FSHXWaterIntersection>();
}

void USHWaterInteractionComponent::AddWaterInteraction(const FSHXWaterIntersection& InWaterIntersection) {
}

void USHWaterInteractionComponent::AddSimpleWaterInteraction(const UObject* Requester, const FSHXWaterIntersection& InWaterIntersection) {
}


