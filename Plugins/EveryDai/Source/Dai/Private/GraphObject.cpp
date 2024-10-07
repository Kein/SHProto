#include "GraphObject.h"

UGraphObject::UGraphObject() {
    this->_Context = NULL;
    this->_Parent = NULL;
}

void UGraphObject::SetRuntimeInfo(const FString& Text) {
}

FString UGraphObject::GetRuntimeInfo() const {
    return TEXT("");
}

FString UGraphObject::GetPropertiesDescription() const {
    return TEXT("");
}

FString UGraphObject::getDisplayName() const {
    return TEXT("");
}


