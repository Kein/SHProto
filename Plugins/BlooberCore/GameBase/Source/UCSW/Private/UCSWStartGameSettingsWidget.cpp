#include "UCSWStartGameSettingsWidget.h"

UUCSWStartGameSettingsWidget::UUCSWStartGameSettingsWidget() {
    this->bIsFocusable = true;
    this->ContinueKeys.AddDefaulted(3);
    this->BackKeys.AddDefaulted(2);
    this->ResetKeys.AddDefaulted(2);
    this->bApplyButtonUsed = false;
    this->ContinueSound = NULL;
    this->BackSound = NULL;
    this->ResetSound = NULL;
    this->Main_switcher = NULL;
    this->DialogPanel = NULL;
    this->FadeIn_anim = NULL;
    this->FadeOut_anim = NULL;
}

void UUCSWStartGameSettingsWidget::ShowExtraPanel(UUCSWStartGameSettingsPanel* Panel) {
}







void UUCSWStartGameSettingsWidget::OnFadedOutAnim() {
}

void UUCSWStartGameSettingsWidget::OnFadedInAnim() {
}


void UUCSWStartGameSettingsWidget::OnActiveWidgetChanged(UWidget* active_widget, int32 active_widget_index) {
}


