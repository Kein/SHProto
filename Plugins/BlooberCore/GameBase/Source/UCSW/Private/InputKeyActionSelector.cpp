#include "InputKeyActionSelector.h"

UInputKeyActionSelector::UInputKeyActionSelector() {
    this->ImageFirst = true;
    this->IsShowMode = false;
    this->SelectedOption = -1;
    this->Justification = ETextJustify::Center;
    this->MaxListHeight = 450.00f;
    this->HasDownArrow = true;
    this->EnableGamepadNavigationMode = true;
    this->IsFocusable = true;
}

void UInputKeyActionSelector::SetSelectedOption(int32 Option) {
}

int32 UInputKeyActionSelector::GetSelectedOption() const {
    return 0;
}


