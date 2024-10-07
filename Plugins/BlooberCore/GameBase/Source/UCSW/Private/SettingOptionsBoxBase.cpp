#include "SettingOptionsBoxBase.h"

USettingOptionsBoxBase::USettingOptionsBoxBase() : UUserWidget(FObjectInitializer::Get()) {
    this->SpinBoxWidgetClass = NULL;
    this->CheckboxWidgetClass = NULL;
    this->SliderWidgetClass = NULL;
    this->VolumeWidgetClass = NULL;
    this->bHideIfNoOptions = true;
    this->Options_panel = NULL;
}

UWidget* USettingOptionsBoxBase::GetLastChild() const {
    return NULL;
}

UWidget* USettingOptionsBoxBase::GetFirstChild() const {
    return NULL;
}


