#include "InputBindingOptionsBox.h"

UInputBindingOptionsBox::UInputBindingOptionsBox() : UUserWidget(FObjectInitializer::Get()) {
    this->OptionWidgetClass = NULL;
    this->bButtonsOnly = false;
    this->bColumn1ButtonsOnly = false;
    this->bColumn2ButtonsOnly = true;
    this->Options_panel = NULL;
}

UWidget* UInputBindingOptionsBox::GetLastChild() const {
    return NULL;
}

UWidget* UInputBindingOptionsBox::GetFirstChild() const {
    return NULL;
}


