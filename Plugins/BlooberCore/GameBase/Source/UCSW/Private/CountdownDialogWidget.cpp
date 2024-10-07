#include "CountdownDialogWidget.h"

UCountdownDialogWidget::UCountdownDialogWidget() {
    this->bIsFocusable = true;
    this->CancelKeys.AddDefaulted(1);
    this->Confirm_but = NULL;
    this->Cancel_but = NULL;
    this->CountNumber = 10;
    this->Counter = 10;
}

void UCountdownDialogWidget::Show() {
}



void UCountdownDialogWidget::Confirm() {
}

void UCountdownDialogWidget::Cancel() {
}


