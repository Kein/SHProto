#include "MaiLightObserver.h"

UMaiLightObserver::UMaiLightObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Radius = 0.00f;
    this->_HalfHeight = 0.00f;
    this->_Enabled = true;
    this->_IsLit = false;
}

void UMaiLightObserver::TurnOn() {
}

void UMaiLightObserver::TurnOff() {
}

bool UMaiLightObserver::IsEnabled() const {
    return false;
}

bool UMaiLightObserver::GetIsLit() const {
    return false;
}


