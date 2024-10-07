#include "SHPostprocessDirectionalLight.h"

FSHPostprocessDirectionalLight::FSHPostprocessDirectionalLight() {
    this->Visible = false;
    this->VisibleInLowQuality = EDLV_AsIs;
    this->Intensity = 0.00f;
    this->IndirectLightingIntensity = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->CastShadows = false;
    this->CastShadowsInLowQuality = EDLV_AsIs;
    this->CastRayTracingShadows = false;
    this->RayTracingShadowsSamplesCount = 0;
    this->ShadowSharpen = 0.00f;
    this->LightSourceAngle = 0.00f;
    this->LightSourceSoftAngle = 0.00f;
    this->ContactShadowLength = 0.00f;
    this->Temperature = 0.00f;
    this->bUseTemperature = false;
    this->SpecularScale = 0.00f;
    this->ShadowBias = 0.00f;
    this->ShadowsQuality = ESSQ_Low;
    this->CascadeTransitionFraction = 0.00f;
    this->CascadeDistributionExponent = 0.00f;
    this->DynamicShadowDistanceMovableLight = 0.00f;
    this->bAffectDynamicIndirectLighting = false;
    this->bEnableLightShaftOcclusion = false;
    this->OcclusionMaskDarkness = 0.00f;
    this->OcclusionDepthRange = 0.00f;
    this->bEnableLightShaftBloom = false;
    this->BloomScale = 0.00f;
    this->BloomThreshold = 0.00f;
    this->BloomMaxBrightness = 0.00f;
    this->bAtmosphereSunLight = false;
    this->AtmosphereSunLightIndex = 0;
    this->bPerPixelAtmosphereTransmittance = false;
    this->bCastShadowsOnClouds = false;
    this->bCastShadowsOnAtmosphere = false;
    this->bCastCloudShadows = false;
    this->CloudShadowStrength = 0.00f;
    this->CloudShadowOnAtmosphereStrength = 0.00f;
    this->CloudShadowOnSurfaceStrength = 0.00f;
    this->CloudShadowDepthBias = 0.00f;
    this->CloudShadowExtent = 0.00f;
    this->CloudShadowMapResolutionScale = 0.00f;
    this->CloudShadowRaySampleCountScale = 0.00f;
    this->FakeAmbientIntensity = 0.00f;
    this->FakeAmbientFromBottom = false;
    this->DayNightFactor = 0.00f;
}

