#include "SHPostprocessRoughnessMetalicityCtrl.h"

FSHPostprocessRoughnessMetalicityCtrl::FSHPostprocessRoughnessMetalicityCtrl() {
    this->Mood = EAMD_None;
    this->RoughnessScale = 0.00f;
    this->RoughnessBias = 0.00f;
    this->RoughnessTerrainScale = 0.00f;
    this->RoughnessTerrainBias = 0.00f;
    this->MetallicityScale = 0.00f;
    this->MetallicityBias = 0.00f;
    this->MetallicityTerrainScale = 0.00f;
    this->MetallicityTerrainBias = 0.00f;
    this->RaytracingCullDistance = 0.00f;
    this->RaytracingCullEnable = false;
    this->LumenReflectionsDownsampleFactor = 0;
    this->LumenReflectionsDownsampleFactorHQ = 0;
    this->MaxRoughnessToTrace = 0.00f;
    this->EyeAdpTrnsInitialPower = 0.00f;
    this->EyeAdpTrnsTurningPoint = 0.00f;
    this->EyeAdpTrnsPower = 0.00f;
    this->EyeAdpTrnsInfluence = 0.00f;
}

