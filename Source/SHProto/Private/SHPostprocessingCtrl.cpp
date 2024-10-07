#include "SHPostprocessingCtrl.h"

ASHPostprocessingCtrl::ASHPostprocessingCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentRetroMode = NULL;
    this->CurrentRetroModeIndex = -1;
    this->HDRVis = NULL;
    this->HCMat = NULL;
    this->RTPC_LeavesIntensity = NULL;
}

void ASHPostprocessingCtrl::ShowHDRSettingsPP(bool State) {
}

void ASHPostprocessingCtrl::ApplyHDRPreview(float MinLuminance, float MidLuminance, float MaxLuminance, float Brightness, float UIBrightness, float UIContrast) {
}


