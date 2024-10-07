#include "SHValveWithRequiredItem.h"

ASHValveWithRequiredItem::ASHValveWithRequiredItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseCorrectItemSelectedAudio = true;
    this->bHasAddedRequiredItem = false;
}


void ASHValveWithRequiredItem::ProcessFocusableItemSelectedEvent(FName InItemName) {
}

bool ASHValveWithRequiredItem::HasAddedRequiredItem() const {
    return false;
}


