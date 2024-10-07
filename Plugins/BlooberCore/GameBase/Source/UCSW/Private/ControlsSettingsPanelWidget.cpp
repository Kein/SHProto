#include "ControlsSettingsPanelWidget.h"

UControlsSettingsPanelWidget::UControlsSettingsPanelWidget() {
    this->BlackListKeys.AddDefaulted(2);
    this->NotHoldableKeys.AddDefaulted(2);
    this->bUnbindOnConflict = false;
}

bool UControlsSettingsPanelWidget::HasEmptyBinds() const {
    return false;
}

bool UControlsSettingsPanelWidget::HasConflicts() const {
    return false;
}


