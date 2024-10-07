#include "UCWScrollBox.h"

UUCWScrollBox::UUCWScrollBox() {
    this->bAllowRightStickScrolling = true;
    this->RightStickScrollMultiplier = 1.00f;
    this->ConsumeAnalogEvent = EConsumeAnalogEvent::WhenScrollingPossible;
    this->bIsFocusable = true;
}


