#include "SHPostprocessRoughnessMetalicityCtrlOverride.h"

FSHPostprocessRoughnessMetalicityCtrlOverride::FSHPostprocessRoughnessMetalicityCtrlOverride() {
    this->bOverride_Mood = false;
    this->bOverride_RoughnessScale = false;
    this->bOverride_RoughnessBias = false;
    this->bOverride_RoughnessTerrainScale = false;
    this->bOverride_RoughnessTerrainBias = false;
    this->bOverride_MetallicityScale = false;
    this->bOverride_MetallicityBias = false;
    this->bOverride_MetallicityTerrainScale = false;
    this->bOverride_MetallicityTerrainBias = false;
    this->bOverride_RaytracingCullDistance = false;
    this->bOverride_RaytracingCullEnable = false;
    this->bOverride_LumenReflectionsDownsampleFactor = false;
    this->bOverride_LumenReflectionsDownsampleFactorHQ = false;
    this->bOverride_MaxRoughnessToTrace = false;
    this->bOverride_EyeAdpTrnsInitialPower = false;
    this->bOverride_EyeAdpTrnsTurningPoint = false;
    this->bOverride_EyeAdpTrnsPower = false;
    this->bOverride_EyeAdpTrnsInfluence = false;
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

