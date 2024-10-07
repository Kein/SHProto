#include "SettingsWidget.h"

USettingsWidget::USettingsWidget() {
    this->BackKeys.AddDefaulted(2);
    this->ResetKeys.AddDefaulted(2);
    this->PrevPanelKeys.AddDefaulted(2);
    this->NextPanelKeys.AddDefaulted(2);
    this->Back_but = NULL;
    this->Reset_but = NULL;
    this->Primary_switcher = NULL;
    this->Main_panel = NULL;
    this->DialogPanel = NULL;
}

void USettingsWidget::ShowExtraPanel(UWidget* Panel) {
}




void USettingsWidget::OnActiveWidgetChanged(UWidget* ActiveWidget, int32 ActiveWidgetIndex) {
}

void USettingsWidget::BackToMainPanel() {
}


