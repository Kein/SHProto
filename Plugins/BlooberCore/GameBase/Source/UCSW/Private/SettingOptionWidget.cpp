#include "SettingOptionWidget.h"

USettingOptionWidget::USettingOptionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Inactive_but = NULL;
}




bool USettingOptionWidget::IsChanged() const {
    return false;
}


