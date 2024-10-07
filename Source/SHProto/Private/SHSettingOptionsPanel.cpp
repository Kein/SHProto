#include "SHSettingOptionsPanel.h"

USHSettingOptionsPanel::USHSettingOptionsPanel() {
    this->ShowAdvanced_but = NULL;
    this->GameplayChallenge_but = NULL;
    this->ItemsNotificationsVis_wdg = NULL;
    this->PresetsConfig = NULL;
    this->GameTextsConfig = NULL;
}

void USHSettingOptionsPanel::UpdateItemsNotificationsVisualization() const {
}

void USHSettingOptionsPanel::ShowItemsNotificationsVisualization(bool Show) {
}















FTutorialsData USHSettingOptionsPanel::GetTutorialsData() const {
    return FTutorialsData{};
}

FTraversalIconData USHSettingOptionsPanel::GetTraversalIconData() const {
    return FTraversalIconData{};
}

FSlateFontInfo USHSettingOptionsPanel::GetTranscriptionFontInfo() const {
    return FSlateFontInfo{};
}

FStruggleInputData USHSettingOptionsPanel::GetStruggleIconData() const {
    return FStruggleInputData{};
}

FReticleData USHSettingOptionsPanel::GetReticleData() const {
    return FReticleData{};
}

bool USHSettingOptionsPanel::GetItemsNotificationsData() const {
    return false;
}

FInteractionIconData USHSettingOptionsPanel::GetInteractionIconData() const {
    return FInteractionIconData{};
}

void USHSettingOptionsPanel::GameplayChallengeApply() {
}


