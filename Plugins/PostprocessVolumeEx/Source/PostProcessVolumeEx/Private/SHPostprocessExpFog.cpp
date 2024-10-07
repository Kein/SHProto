#include "SHPostprocessExpFog.h"

FSHPostprocessExpFog::FSHPostprocessExpFog() {
    this->Visible = false;
    this->FogDensity = 0.00f;
    this->FogHeightFalloff = 0.00f;
    this->FogMaxOpacity = 0.00f;
    this->StartDistance = 0.00f;
    this->FogCutoffDistance = 0.00f;
    this->SecondFogDensity = 0.00f;
    this->SecondFogHeightFalloff = 0.00f;
    this->SecondFogHeightOffset = 0.00f;
    this->DirectionalInscatteringExponent = 0.00f;
    this->DirectionalInscatteringStartDistance = 0.00f;
    this->bEnableVolumetricFog = false;
    this->VolumetricFogScatteringDistribution = 0.00f;
    this->VolumetricFogExtinctionScale = 0.00f;
    this->VolumetricFogDistance = 0.00f;
    this->VolumetricFogStaticLightingScatteringIntensity = 0.00f;
    this->bOverrideLightColorsWithFogInscatteringColors = false;
    this->HeightIsCameraRelative = false;
    this->WorldOriginHeightOffset = 0.00f;
    this->FogDarkening = false;
    this->FogDarkeningExponent = 0.00f;
    this->FogDarkeningDepthThreshold = 0.00f;
    this->FogDarkeningDepthThresholdFade = 0.00f;
    this->FogDarkeningFadeBias = 0.00f;
    this->FogDarkeningFadeExponent = 0.00f;
    this->FogDarkeningFadeScale = 0.00f;
    this->FogDistanceScale = 0.00f;
    this->FogContrast = 0.00f;
    this->FogNoiseScaleMultiplier = 0.00f;
    this->FogSpeedMultiplier = 0.00f;
    this->FogIntensityMultiplier = 0.00f;
    this->ReflectionsFog = false;
    this->ReflectionsFogNearCutOut = 0.00f;
    this->ReflectionsFogDensityScale = 0.00f;
    this->ReflectionsFogAbsorbtionScale = 0.00f;
    this->ReflectionsFogBrightnessScale = 0.00f;
}

