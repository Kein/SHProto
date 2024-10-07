#include "SHFlickeringLightBase.h"

ASHFlickeringLightBase::ASHFlickeringLightBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuzzSound = NULL;
    this->OnOffSound = NULL;
    this->OnOffThreshold = 50.00f;
    this->OffThreshold = 5.00f;
    this->BuzzThreshold = 5.00f;
    this->bEditModeEnabled = false;
    this->BuzzSoundComponent = NULL;
    this->bEditModeEnabledPrev = false;
}

void ASHFlickeringLightBase::UpdateTemperatureAndBaseIntensity(float Temperature, float IntensityScale) {
}

void ASHFlickeringLightBase::UpdateOffTagsInGroups() {
}

void ASHFlickeringLightBase::UpdateNativeParameters(bool EnableRandomFlicker, float LightIntensityMin, float LightIntensityMax, float BlinkingMin, float BlinkingMax, float ChangeTimeMin, float ChangeTimeMax, float ShutdownIntensity, float GentleShutdownTime, bool ForceGentleShutdown, bool BlinkingIsAbsolute) {
}

void ASHFlickeringLightBase::UpdateNativeFlickers(bool RandomFlickerEnabled, FLinearColor EmissionColor, bool EmissionReplaceMtl, bool EmissionReplaceLgh, float ExternalScaleLight, float ExternalScaleMaterial) {
}

void ASHFlickeringLightBase::StopBuzzSound() {
}

void ASHFlickeringLightBase::StepFlickersInEditor(float DeltaSeconds) {
}

void ASHFlickeringLightBase::StartBuzzSound() {
}

void ASHFlickeringLightBase::SetWantTickEnabled(bool bEnabled) {
}

void ASHFlickeringLightBase::SetGroupState(FName Group, ESHFlickerGroupState State) {
}

void ASHFlickeringLightBase::PrepareFlickerGroups(float Temperature, float IntensityScale, bool ResetGroups) {
}



int32 ASHFlickeringLightBase::GetNumberOfBrokenComponents() const {
    return 0;
}

ESHFlickerGroupState ASHFlickeringLightBase::GetGroupState(FName Group) {
    return ESHFlickerGroupState::Enabled;
}

float ASHFlickeringLightBase::GetAverageIntensity() const {
    return 0.0f;
}

TArray<ASHFlickeringLightBase*> ASHFlickeringLightBase::GetAllFlickeringLights() {
    return TArray<ASHFlickeringLightBase*>();
}

bool ASHFlickeringLightBase::EditModeEnabled() const {
    return false;
}


