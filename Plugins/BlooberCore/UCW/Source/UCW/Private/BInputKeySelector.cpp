#include "BInputKeySelector.h"

UBInputKeySelector::UBInputKeySelector() {
    this->ResetAkEvent = NULL;
    this->KeyChangedAkEvent = NULL;
    this->IsFocusable = true;
    this->bNoLabel = false;
    this->IsLabelFirst = false;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->Justification = ETextJustify::Center;
    this->MinDesiredWidth = 0.00f;
    this->AutoWrapText = false;
    this->WrapTextAt = 0.00f;
    this->WrappingPolicy = ETextWrappingPolicy::DefaultWrapping;
    this->KeySelectionText = FText::FromString(TEXT("Press any key"));
    this->NoKeySpecifiedText = FText::FromString(TEXT("-"));
    this->bAllowGamepadKeys = false;
    this->bAllowModifierKeys = false;
    this->bGamepadKeysOnly = false;
    this->bAnalogOnly = false;
    this->EscapeKeys.AddDefaulted(1);
}

void UBInputKeySelector::SetSelectedKey(const FInputChord& InSelectedKey) {
}

void UBInputKeySelector::SetLabelText(FText InText) {
}

void UBInputKeySelector::SetColorAndOpacity(const FLinearColor& InColor) {
}

bool UBInputKeySelector::GetIsSelectingKey() const {
    return false;
}


