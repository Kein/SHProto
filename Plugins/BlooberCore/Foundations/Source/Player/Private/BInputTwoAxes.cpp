#include "BInputTwoAxes.h"

UBInputTwoAxes::UBInputTwoAxes() {
}

FName UBInputTwoAxes::GetSecondAxisName() const {
    return NAME_None;
}

FName UBInputTwoAxes::GetFirstAxisName() const {
    return NAME_None;
}

FVector2D UBInputTwoAxes::GetCurrentValue() const {
    return FVector2D{};
}


