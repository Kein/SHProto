#include "SHAimDistruptorComponent.h"

USHAimDistruptorComponent::USHAimDistruptorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWantDistrupt = true;
    this->ReachFullEffectSeconds = 3.00f;
    this->CrosshairDisplacementPixels = 2.00f;
    this->CameraShake_FrequencyScale = 25.00f;
    this->CameraShake_DisplacementScale = 0.15f;
}

void USHAimDistruptorComponent::SetEnabled(const bool bInEnabled, const UObject* Object) {
}

bool USHAimDistruptorComponent::IsEnabled() const {
    return false;
}


