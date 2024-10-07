#include "BSpinBox.h"
#include "Templates/SubclassOf.h"

UBSpinBox::UBSpinBox() {
    this->ScrollStyle = NULL;
    this->Style = NULL;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->IndicatorVerticalAlignment = VAlign_Center;
    this->ShowArrowsIn2State = true;
    this->ShowBottomIndicator = true;
    this->Justification = ETextJustify::Center;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->IsFocusable = true;
    this->WrapValues = false;
    this->SpinOnNavigation = true;
    this->SpinOnClick = false;
    this->ToggleableIn2State = false;
    this->ControllLabelVisibility = true;
    this->Label = NULL;
    this->MobileFontSizeMultiplier = 1.00f;
    this->SingleMaterialStyleMID = NULL;
}

void UBSpinBox::SetValue(int32 Value) {
}

void UBSpinBox::SetStyle(TSubclassOf<UUCWSpinBoxStyle> InStyle) {
}

void UBSpinBox::SetSelectedOption(int32 Option) {
}

void UBSpinBox::SetOptions(const TArray<FText>& Options, int32 Num) {
}

void UBSpinBox::SetLabel(UWidget* InContent) {
}

void UBSpinBox::ResetScrollState() {
}

int32 UBSpinBox::GetValue() const {
    return 0;
}

int32 UBSpinBox::GetSelectedOption() const {
    return 0;
}


