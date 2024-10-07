#include "GFXSettings.h"

FGFXSettings::FGFXSettings() {
    this->GammaValue = 0.00f;
    this->VSync = false;
    this->ScreenMode = EScreenMode::Fullscreen;
    this->MonitorIndex = 0;
    this->HDR = false;
    this->HDRMinLuminance = 0.00f;
    this->HDRMidLuminance = 0.00f;
    this->HDRMaxLuminance = 0.00f;
    this->HDRBrightness = 0.00f;
    this->HDRUIBrightness = 0.00f;
    this->HDRUIContrast = 0.00f;
    this->Quality = GFXQuality::Low;
    this->AdvQualityIsCustom = false;
    this->SpecialQuality = SpecialGFXQuality::Quality;
    this->FpsCap = EFpsCap::Unlimited;
    this->Raytracing = ERaytracing::Off;
    this->DynRes = EDynamicResolution::Off;
    this->Panini = EPanini::Off;
    this->IngameMotionBlur = false;
}

