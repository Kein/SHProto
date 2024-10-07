#include "UCWSkipWidget.h"

UUCWSkipWidget::UUCWSkipWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->ProgressBar_wdg = NULL;
    this->Progress_wdg = NULL;
    this->SkipHoldTime = 2.00f;
    this->bActivateOnShow = true;
    this->bSkipOnAnyKey = true;
    this->bSetVisibilityOnShow = true;
    this->bSetVisibilityOnHide = true;
    this->SkipKeys.AddDefaulted(3);
}

void UUCWSkipWidget::Show() {
}





void UUCWSkipWidget::InputDeviceChanged() {
}

void UUCWSkipWidget::Hide() {
}

void UUCWSkipWidget::Deactivate() {
}





void UUCWSkipWidget::Activate() {
}


