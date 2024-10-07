#include "SHPlayerProfile.h"
#include "EControllerIcons.h"

USHPlayerProfile::USHPlayerProfile() {
    this->ControllerIcons = EControllerIcons::Sony;
    this->ReticleVisibility = EReticleVisibility::Dynamic;
    this->ReticleThickness = EReticleThickness::Normal;
    this->ReticleOpacity = 0.80f;
    this->ReticleColor = EReticleColor::White;
    this->InteractionIconVisibility = EInteractionIconVisibility::Icon;
    this->InteractionIconSize = EInteractionIconSize::Default;
    this->TraversalIconVisibility = EInteractionIconVisibility::Off;
    this->TraversalIconSize = EInteractionIconSize::Default;
    this->StruggleInputVisibility = EStruggleInputVisibility::Off;
    this->StruggleInputSize = EStruggleInputSize::Default;
    this->ShowGameplayCenterDotReticle = false;
    this->ShowRadioStateIndicator = false;
    this->AmmoWidgetVisibility = EAmmoWidgetVisibility::Dynamic;
    this->DirectionalVisualisation = false;
    this->TranscriptionTextFont = ETextFont::Default;
    this->TranscriptionTextSize = ETextSize::Medium;
    this->TutorialsVisibility = true;
    this->TutorialsTextFont = ETextFont::Default;
    this->TutorialsTextSize = ETextSize::Medium;
    this->ShowLoadingHints = true;
    this->AimSensitivityY = 0.50f;
    this->AimSensitivityX = 0.50f;
    this->AimInvertY = false;
    this->AimMirrorX = false;
    this->LookSensitivityY = 0.50f;
    this->LookSensitivityX = 0.50f;
    this->LookInvertY = false;
    this->LookMirrorX = false;
    this->AimAssistMagnetismMode = EAimAssistMagnetismMode::Off;
    this->bAdaptiveTriggersConstantMode = true;
    this->bStruggleHoldMode = false;
    this->bLowHealthVignette = true;
    this->bEnableSplatterVignette = true;
    this->bEnableItemsNotifications = true;
    this->RangeAimTriggerMode = ESHInputTriggerMode::Left;
    this->MeleeAttackTriggerMode = ESHInputTriggerMode::Right;
    this->FireTriggerMode = ESHInputTriggerMode::Right;
    this->BoatLeftTriggerMode = ESHInputTriggerMode::Left;
    this->BoatRightTriggerMode = ESHInputTriggerMode::Right;
    this->EnableInventoryVisualEffects = true;
    this->HighContrastMode = false;
    this->HighContrastAlliesColor = EHighContrastColor::Green;
    this->HighContrastCollectibleItemsColor = EHighContrastColor::Cyan;
    this->HighContrastEnemiesColor = EHighContrastColor::Red;
    this->HighContrastEnvironmentColor = EHighContrastColor::White;
    this->HighContrastJamesColor = EHighContrastColor::Blue;
    this->HighContrastGrayscaleBackground = true;
    this->VisualMode = EVisualMode::Default;
    this->PlayerSkin = EPlayerSkin::Default;
    this->SprintToggleable = false;
    this->Presets = ESettingsPresets::Default;
    this->CombatDifficulty = ECombatDifficulty::Medium;
}


