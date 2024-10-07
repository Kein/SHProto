#include "PlayerProfile.h"

UPlayerProfile::UPlayerProfile() {
    this->AudioDeviceUID = 4294967295;
    this->AudioProfileNightMode = false;
    this->AudioProfile = EAudioProfileOption::Speakers;
    this->Language = TEXT("en");
    this->AudioLanguage = TEXT("en");
    this->ShowSubtitles = true;
    this->ShowNonVerbalCaptions = false;
    this->SubtitleNames = true;
    this->SubtitleSize = ETextSize::Medium;
    this->SubtitleColor = ESubtitleColor::On;
    this->SubtitleFont = ETextFont::Default;
    this->SubtitleBackground = ESubtitleBackground::None;
    this->ControlTipsVisibility = true;
    this->ControlTipsVisibilityEffects = ETooltipsVisibilityEffects::None;
    this->ControlTipsTextFont = ETextFont::Default;
    this->ControlTipsTextSize = ETextSize::Medium;
    this->ForceFeedback = EForceFeedback::Medium;
    this->AdaptiveTriggers = true;
    this->ControllerIcons = EControllerIcons::Microsoft;
    this->InvertAcceptBackKeys = false;
    this->DeadZone_Gamepad_Left = 0.25f;
    this->DeadZone_Gamepad_Right = 0.25f;
    this->Accessibility = false;
    this->ColorVisionDeficiency = EColorVisionDeficiency::NormalVision;
    this->ColorVisionDeficiencySeverity = 0.30f;
    this->SynchronizationID = 0;
}

bool UPlayerProfile::IsMuted(FName Name) const {
    return false;
}

bool UPlayerProfile::IsHDREnabledAndAllowed() {
    return false;
}

float UPlayerProfile::GetVolume(FName Name) const {
    return 0.0f;
}


