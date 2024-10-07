#include "FlowItem.h"

UFlowItem::UFlowItem() {
    this->_SaveGame = false;
    this->_ResetState = true;
    this->_CallCounter = 0;
    this->_ShortID = 0;
    this->_ExtraData = NULL;
    this->_Template = NULL;
}

FDialogObjectID UFlowItem::GetFlowRef() const {
    return FDialogObjectID{};
}

FString UFlowItem::GetDisplayString() const {
    return TEXT("");
}


