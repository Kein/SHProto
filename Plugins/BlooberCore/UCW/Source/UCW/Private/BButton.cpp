#include "BButton.h"
#include "Templates/SubclassOf.h"

UBButton::UBButton() {
    this->Style = NULL;
    this->SingleMaterialStyleMID = NULL;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->IsFocusable = true;
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
}

void UBButton::SetStyle(TSubclassOf<UUCWButtonStyle> InStyle) {
}

void UBButton::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UBButton::SetBackgroundColor(FLinearColor InBackgroundColor) {
}

bool UBButton::IsPressed() const {
    return false;
}


