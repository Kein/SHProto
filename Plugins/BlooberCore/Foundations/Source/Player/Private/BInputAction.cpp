#include "BInputAction.h"

UBInputAction::UBInputAction() {
}

bool UBInputAction::IsReleased() const {
    return false;
}

bool UBInputAction::IsPressed() const {
    return false;
}

int32 UBInputAction::GetRepeatCount() const {
    return 0;
}

FKey UBInputAction::GetLastPressedKey() const {
    return FKey{};
}


