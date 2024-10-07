#include "BCheckBox.h"

UBCheckBox::UBCheckBox() {
    this->_HoverOnFocus = true;
    this->UseInternalLabel = false;
    this->Label = NULL;
    this->InternalLabel = NULL;
}

void UBCheckBox::SetLabel(UWidget* InContent) {
}

void UBCheckBox::SetInternalLabel(UTextBlock* InContent) {
}


