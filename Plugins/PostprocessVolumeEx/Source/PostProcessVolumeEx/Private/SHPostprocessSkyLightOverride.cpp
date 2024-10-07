#include "SHPostprocessSkyLightOverride.h"

FSHPostprocessSkyLightOverride::FSHPostprocessSkyLightOverride() {
    this->bOverride_Visible = false;
    this->bOverride_SourceType = false;
    this->bOverride_Cubemap = false;
    this->bOverride_SourceCubemapAngle = false;
    this->bOverride_RecaptureFrequency = false;
    this->bOverride_SkyDistanceThreshold = false;
    this->bOverride_Intensity = false;
    this->bOverride_IndirectLightIntensity = false;
    this->bOverride_VolumetricScatteringIntensity = false;
    this->bOverride_LightColor = false;
    this->bOverride_LowerHemisphereColor = false;
    this->bOverride_bLowerHemisphereIsBlack = false;
    this->bOverride_CastShadows = false;
    this->bOverride_CastRayTracingShadows = false;
    this->bOverride_RayTracingShadowsSamplesCount = false;
    this->bOverride_bAffectTranslucentLighting = false;
    this->bOverride_bTransmission = false;
    this->bOverride_OcclusionMaxDistance = false;
    this->bOverride_Contrast = false;
    this->bOverride_OcclusionExponent = false;
    this->bOverride_MinOcclusion = false;
    this->bOverride_OcclusionTint = false;
    this->bOverride_OcclusionCombineMode = false;
    this->bOverride_AOScale = false;
    this->bOverride_LumenBiasFactor = false;
    this->Visible = false;
    this->SourceType = SLS_CapturedScene;
    this->Cubemap = NULL;
    this->SourceCubemapAngle = 0.00f;
    this->RecaptureFrequency = ESLF_Low;
    this->SkyDistanceThreshold = 0.00f;
    this->Intensity = 0.00f;
    this->IndirectLightIntensity = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->bLowerHemisphereIsBlack = false;
    this->CastShadows = false;
    this->CastRayTracingShadows = false;
    this->RayTracingShadowsSamplesCount = 0;
    this->bAffectTranslucentLighting = false;
    this->bTransmission = false;
    this->OcclusionMaxDistance = 0.00f;
    this->Contrast = 0.00f;
    this->OcclusionExponent = 0.00f;
    this->MinOcclusion = 0.00f;
    this->OcclusionCombineMode = OCM_Minimum;
    this->AOScale = 0.00f;
    this->LumenBiasFactor = 0.00f;
}

