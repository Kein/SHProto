#include "SHExtraSettingsPanelWidget.h"

USHExtraSettingsPanelWidget::USHExtraSettingsPanelWidget() {
    this->PanelType = ESHExtraSettingsType::None;
    this->Confirmation_dialog = NULL;
    this->bPanelNeedBackInfoDialog = false;
    this->bPanelNeedFadeOutBeforeBackProcedure = false;
    this->bPanelNeedResetOnBackProcedure = false;
    this->bPanelNeedRevertOnBackProcedure = false;
    this->FadeOut_anim = NULL;
}

void USHExtraSettingsPanelWidget::ShowBackInfo() {
}



void USHExtraSettingsPanelWidget::HideBackInfo() {
}

void USHExtraSettingsPanelWidget::FadedOut() {
}


