#include "SHUserButton.h"

USHUserButton::USHUserButton() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->Blocked = false;
    this->Root_but = NULL;
    this->Label_wdg = NULL;
}

void USHUserButton::SetLocked(bool bInIsLocked) {
}

void USHUserButton::SetDisplayName(const FText& Text) {
}

bool USHUserButton::IsLocked() const {
    return false;
}



