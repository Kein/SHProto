#include "SHFlashlightControlData.h"

FSHFlashlightControlData::FSHFlashlightControlData() {
    this->bOverrideLightsColor = false;
    this->bOverrideMainLightAttenuationRadius = false;
    this->MainLightAttenuationRadius = 0.00f;
    this->bOverrideMainLightIntensityMul = false;
    this->MainLightIntensityMul = 0.00f;
    this->bOverrideMainLightInnerConeAngle = false;
    this->MainLightInnerConeAngle = 0.00f;
    this->bOverrideMainLightOuterConeAngle = false;
    this->MainLightOuterConeAngle = 0.00f;
    this->bOverrideMainLightIndirectLightingIntensity = false;
    this->MainLightIndirectLightingIntensity = 0.00f;
    this->bOverrideMainLightIESTexture = false;
    this->MainLightIESTexture = NULL;
    this->bOverrideCloseLightIntensityMul = false;
    this->CloseLightIntensityMul = 0.00f;
    this->bOverrideBackLightIntensityMul = false;
    this->BackLightIntensityMul = 0.00f;
    this->bOverrideLightshaftMaterial0EdgeColor = false;
    this->bOverrideLightshaftMaterial0TintEmission = false;
    this->bOverrideLightshaftMaterial1EdgeColor = false;
    this->bOverrideLightshaftMaterial1TintEmission = false;
}

