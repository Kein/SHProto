#include "TextButton.h"

UTextButton::UTextButton() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->_HasChildrenInTheSlot = false;
    this->ScrollStyle = NULL;
    this->MinDesiredWidth = 0.00f;
    this->Justification = ETextJustify::Center;
    this->AutoWrapText = false;
    this->WrapTextAt = 0.00f;
    this->WrappingPolicy = ETextWrappingPolicy::DefaultWrapping;
    this->MobileFontSizeMultiplier = 1.00f;
}

void UTextButton::SetText(FText InText) {
}

void UTextButton::ResetScrollState() {
}

FText UTextButton::GetText() const {
    return FText::GetEmpty();
}


