#include "ExtraSettingsPanelWidget.h"

UExtraSettingsPanelWidget::UExtraSettingsPanelWidget() {
    this->bIsFocusable = true;
    this->PanelNeedNoBackgroundView = false;
    this->bPanelHasCustomBackHotKey = false;
    this->bPanelHasCustomBackProcedure = false;
    this->BackSound = NULL;
    this->ResetSound = NULL;
    this->Options_panel = NULL;
    this->Back_but = NULL;
    this->Reset_but = NULL;
}

void UExtraSettingsPanelWidget::Show() {
}

void UExtraSettingsPanelWidget::Revert() {
}

void UExtraSettingsPanelWidget::Reset() {
}



void UExtraSettingsPanelWidget::Hide() {
}





void UExtraSettingsPanelWidget::Back() {
}


