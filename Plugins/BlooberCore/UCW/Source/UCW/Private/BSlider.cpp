#include "BSlider.h"

UBSlider::UBSlider() {
    this->RequiresControllerLock = false;
    this->HoverOnFocus = true;
    this->HoveredAkEvent = NULL;
    this->ChangedAkEvent = NULL;
    this->ControllLabelVisibility = true;
    this->Label = NULL;
}

void UBSlider::SetLabel(UWidget* InContent) {
}

bool UBSlider::HasInputCaptured() const {
    return false;
}


