#include "UCWTextButtonStyle.h"

UUCWTextButtonStyle::UUCWTextButtonStyle() {
    this->bSingleTextStyle = true;
    this->bInheritTextColor = true;
    this->NormalTextStyle = NULL;
    this->HoveredTextStyle = NULL;
    this->FocusedTextStyle = NULL;
    this->PressedTextStyle = NULL;
    this->DisabledTextStyle = NULL;
}

UCommonTextStyle* UUCWTextButtonStyle::GetNormalTextStyle() const {
    return NULL;
}

UCommonTextStyle* UUCWTextButtonStyle::GetHoveredTextStyle() const {
    return NULL;
}

UCommonTextStyle* UUCWTextButtonStyle::GetFocusedTextStyle() const {
    return NULL;
}

UCommonTextStyle* UUCWTextButtonStyle::GetDisabledTextStyle() const {
    return NULL;
}


