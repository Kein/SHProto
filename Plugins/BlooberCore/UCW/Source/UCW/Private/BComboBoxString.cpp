#include "BComboBoxString.h"

UBComboBoxString::UBComboBoxString() {
    this->Justification = ETextJustify::Left;
    this->ControllLabelVisibility = true;
    this->Label = NULL;
}

void UBComboBoxString::SetStyle(const FHoverableTextStyle& InStyle) {
}

void UBComboBoxString::SetSelectedOptionIndex(int32 Index) {
}

void UBComboBoxString::SetOptions(const TArray<FText>& Options, int32 Num, bool PreserveSelection) {
}

void UBComboBoxString::SetLabel(UWidget* InContent) {
}

bool UBComboBoxString::HasInputCaptured() const {
    return false;
}

int32 UBComboBoxString::GetSelectedOptionIndex() const {
    return 0;
}


