#include "SettingsDialogPanel.h"

USettingsDialogPanel::USettingsDialogPanel() {
    this->bIsFocusable = true;
    this->bManageVisibilityOnShowAndHide = true;
}

void USettingsDialogPanel::ShowCountdown() {
}

void USettingsDialogPanel::ShowConfirmation() {
}



bool USettingsDialogPanel::IsActive() const {
    return false;
}

void USettingsDialogPanel::CountdownResponseConfirm() {
}

void USettingsDialogPanel::CountdownResponseCancel() {
}

void USettingsDialogPanel::ConfirmationResponseYes() {
}

void USettingsDialogPanel::ConfirmationResponseNo() {
}

void USettingsDialogPanel::ConfirmationResponseCancel() {
}


