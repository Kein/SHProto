#include "BaseSettingsWidget.h"

UBaseSettingsWidget::UBaseSettingsWidget() {
    this->bIsFocusable = true;
    this->Main_tbar = NULL;
    this->Main_switcher = NULL;
    this->FadeIn_anim = NULL;
    this->FadeOut_anim = NULL;
    this->bApplyButtonUsed = false;
    this->bTreatChangeTabAsBack = false;
    this->bSilentPositiveConfirmation = false;
    this->FadeOutSpeed = 1.00f;
    this->BackSound = NULL;
    this->ResetSound = NULL;
}

void UBaseSettingsWidget::Show() {
}

void UBaseSettingsWidget::Revert() {
}

void UBaseSettingsWidget::Reset() {
}







void UBaseSettingsWidget::OnFadedOutAnim() {
}

void UBaseSettingsWidget::OnFadedInAnim() {
}


void UBaseSettingsWidget::CountdownResponseConfirm() {
}

void UBaseSettingsWidget::CountdownResponseCancel() {
}

void UBaseSettingsWidget::ConfirmationResponseYes() {
}

void UBaseSettingsWidget::ConfirmationResponseNo() {
}

void UBaseSettingsWidget::ConfirmationResponseCancel() {
}

void UBaseSettingsWidget::Back() {
}


