#include "SHPostprocessLevelDataCtrl.h"

FSHPostprocessLevelDataCtrl::FSHPostprocessLevelDataCtrl() {
    this->ForcedLastLODDistance = 0.00f;
    this->HDRFinalExponent = 0.00f;
    this->HDRFinalMultiplier = 0.00f;
    this->EnableGI = false;
    this->RimLightIntensity = 0.00f;
    this->RimLightETA = 0.00f;
    this->RimLightBias = 0.00f;
    this->RimLightAngleMin = 0.00f;
    this->RimLightAngleMax = 0.00f;
    this->CharacterLightIntensity = 0.00f;
    this->ShadowTexelsPerPixel = 0.00f;
    this->ShadowTexelsPerPixelPointlight = 0.00f;
    this->ShadowTexelsPerPixelSpotlight = 0.00f;
    this->ShadowTexelsPerPixelRectlight = 0.00f;
}

