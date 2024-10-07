#include "SHGameplayFocusSlotButton.h"

USHGameplayFocusSlotButton::USHGameplayFocusSlotButton() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonCore = NULL;
    this->ButtonTextBlock = NULL;
    this->bIsInputModeEnabled = false;
    this->bIsMultiItem = false;
    this->WidgetOwner = NULL;
}


void USHGameplayFocusSlotButton::ButtonPressed() {
}


