#include "SHAkFlashlightComponent.h"

USHAkFlashlightComponent::USHAkFlashlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlickerOffEventAlphaIntensityThreshold = 0.10f;
    this->FlickerOnEventAlphaIntensityThreshold = 0.50f;
    this->AudioEvent_FlashlightOn = NULL;
    this->AudioEvent_FlashlightOff = NULL;
    this->AudioEvent_Flashlight_Flicker_Off = NULL;
    this->AudioEvent_Flashlight_Flicker_On = NULL;
    this->AudioEvent_Flashlight_Flicker_Buzz = NULL;
    this->RTPC_Flicker_Intensity = NULL;
}


