#include "PostProcessChildVolume.h"

APostProcessChildVolume::APostProcessChildVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEnabled = true;
    this->bOverride_DirectionalLightSettings = false;
    this->bOverride_ExponentialFogSettings = false;
    this->bOverride_SkyLightSettings = false;
    this->bOverride_RoughnessAndMetallicity = false;
    this->bOverride_Wind = false;
    this->bOverride_Exposure = false;
    this->bOverride_ColorGrading = false;
    this->bOverride_Film = false;
    this->bOverride_DOF = false;
    this->BlendWeight = 1.00f;
    this->BlendRadius = 100.00f;
}

void APostProcessChildVolume::SetIsEnabled(bool C) {
}

bool APostProcessChildVolume::GetIsEnabled() const {
    return false;
}


