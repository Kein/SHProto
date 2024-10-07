#include "AskNewGameSettingsWidget.h"

UAskNewGameSettingsWidget::UAskNewGameSettingsWidget() {
    this->AcceptKeys.AddDefaulted(2);
    this->DeclineKeys.AddDefaulted(2);
    this->CancelKeys.AddDefaulted(2);
    this->Config = NULL;
    this->Presets = NULL;
    this->Visualization_img = NULL;
}

void UAskNewGameSettingsWidget::Update() {
}




