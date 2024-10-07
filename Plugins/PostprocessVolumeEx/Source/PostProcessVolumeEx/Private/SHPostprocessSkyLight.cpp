#include "SHPostprocessSkyLight.h"

FSHPostprocessSkyLight::FSHPostprocessSkyLight() {
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

