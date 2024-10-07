#include "InputBindingViewBox.h"

UInputBindingViewBox::UInputBindingViewBox() : UUserWidget(FObjectInitializer::Get()) {
    this->ViewWidgetClass = NULL;
    this->bPCKeysOnly = false;
    this->bGamepadKeysOnly = false;
    this->bForAxisAnalogOnly = false;
    this->bShowSingleKey = false;
    this->Options_panel = NULL;
}

UWidget* UInputBindingViewBox::GetLastChild() const {
    return NULL;
}

UWidget* UInputBindingViewBox::GetFirstChild() const {
    return NULL;
}


