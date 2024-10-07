#include "AskDialogWidget.h"

UAskDialogWidget::UAskDialogWidget() {
    this->bIsFocusable = true;
    this->Type = EAskDialogType::YesNoCancel;
    this->AcceptKeys.AddDefaulted(2);
    this->DeclineKeys.AddDefaulted(2);
    this->CancelKeys.AddDefaulted(2);
    this->Accept_but = NULL;
    this->Decline_but = NULL;
    this->Cancel_but = NULL;
    this->AcceptSoundEvent = NULL;
    this->DeclineSoundEvent = NULL;
    this->CancelSoundEvent = NULL;
    this->WrongKeySoundEvent = NULL;
    this->FadeOut_anim = NULL;
}

void UAskDialogWidget::Show() {
}



void UAskDialogWidget::FadedOut() {
}

void UAskDialogWidget::Decline() {
}

void UAskDialogWidget::Cancel() {
}

void UAskDialogWidget::Accept() {
}


