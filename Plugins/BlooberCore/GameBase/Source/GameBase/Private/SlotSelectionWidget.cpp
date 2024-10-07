#include "SlotSelectionWidget.h"

USlotSelectionWidget::USlotSelectionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->CreateScreenshootsTexture = false;
}

int32 USlotSelectionWidget::GetTheNewestSlotIndex() const {
    return 0;
}

int32 USlotSelectionWidget::GetSlotsCount() const {
    return 0;
}

TArray<FSaveSlotInfo> USlotSelectionWidget::GetSlotList() const {
    return TArray<FSaveSlotInfo>();
}

void USlotSelectionWidget::GenerateSlotList() {
}

void USlotSelectionWidget::Continue(int32 selectedSlot, bool ClearSlot) {
}


