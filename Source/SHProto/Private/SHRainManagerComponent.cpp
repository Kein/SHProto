#include "SHRainManagerComponent.h"

USHRainManagerComponent::USHRainManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USHRainManagerComponent::SetRainSplashesBlocked(const bool IsBlock, const UObject* Object) {
}

void USHRainManagerComponent::SetRainingBlocked(const bool IsBlock, const UObject* Object) {
}

bool USHRainManagerComponent::IsRainSplashesBlockedBy(const UObject* Object) const {
    return false;
}

bool USHRainManagerComponent::IsRainSplashesBlocked() const {
    return false;
}

bool USHRainManagerComponent::IsRainingBlockedBy(const UObject* Object) const {
    return false;
}

bool USHRainManagerComponent::IsRainingBlocked() const {
    return false;
}

int32 USHRainManagerComponent::GetRegisteredRainVolumeCount() const {
    return 0;
}

ASHGameplayRainVolume* USHRainManagerComponent::GetEncompassedRainVolume(const FVector& InLocation) const {
    return NULL;
}


