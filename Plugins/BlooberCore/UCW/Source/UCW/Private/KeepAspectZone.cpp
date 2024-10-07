#include "KeepAspectZone.h"
#include "Components/SlateWrapperTypes.h"

UKeepAspectZone::UKeepAspectZone() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->PadLeft = true;
    this->PadRight = true;
    this->PadTop = true;
    this->PadBottom = true;
    this->bKeepAspectBelowDesire = false;
}

void UKeepAspectZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom) {
}


