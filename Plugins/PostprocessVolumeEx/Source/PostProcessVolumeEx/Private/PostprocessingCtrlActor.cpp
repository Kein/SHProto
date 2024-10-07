#include "PostprocessingCtrlActor.h"

APostprocessingCtrlActor::APostprocessingCtrlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedAtmospheresDatatable = NULL;
    this->CachedPresetsOverridesDatatable = NULL;
    this->DirectionalLight = NULL;
    this->DirectionalAmbient = NULL;
    this->ExpHeightFog = NULL;
    this->AtmSky = NULL;
    this->SkyLight = NULL;
    this->Skybox = NULL;
    this->VCloudsCtrl = NULL;
    this->VClouds = NULL;
    this->InterpolatedDayNightFactor = 0.00f;
    this->NiagaraParametersCollectionInstance = NULL;
    this->FogDarkeningMaterial = NULL;
    this->LensDistortionMaterial = NULL;
    this->MagicLightMaterial = NULL;
    this->DefaultWeatherTexture = NULL;
    this->DefaultGradientTexture = NULL;
    this->TeleportRotationOffset = 0.00f;
    this->SkyRecaptureFrequency = 1.00f;
    this->ParametersCollection = NULL;
    this->TranslucencyParametersCollection = NULL;
    this->NiagaraParametersCollection = NULL;
    this->SSSDayNightFactorMin = 0.10f;
    this->SSSDayNightFactorMax = 1.00f;
    this->FUZZDayNightFactorMin = 0.50f;
    this->FUZZDayNightFactorMax = 1.00f;
    this->BCKLGHDayNightFactorMin = 0.50f;
    this->BCKLGHDayNightFactorMax = 1.00f;
    this->AtmosphereDOFFogScalingFactors = NULL;
}

void APostprocessingCtrlActor::OverrideWindParameters(bool State, FSHPostprocessWindData Wind) {
}

void APostprocessingCtrlActor::OverrideGlobalSettins(const FAtmospherePresetDataEx& Data, bool DoOverride, bool DisableSubVolumesDuringOverride) {
}

FSHPostprocessWindData APostprocessingCtrlActor::GetLastWindData() const {
    return FSHPostprocessWindData{};
}

float APostprocessingCtrlActor::GetDayNightFactor() const {
    return 0.0f;
}

APostprocessingCtrlActor* APostprocessingCtrlActor::GetAtmosphereController(const UObject* WorldContextObject) {
    return NULL;
}

void APostprocessingCtrlActor::EnableContactShadows() {
}

void APostprocessingCtrlActor::DisableContactShadows() {
}


