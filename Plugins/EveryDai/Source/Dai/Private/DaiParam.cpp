#include "DaiParam.h"

UDaiParam::UDaiParam() {
    this->_IsUpToDate = false;
}

void UDaiParam::SetUpToDate() {
}

void UDaiParam::NeedsUpdate() {
}

bool UDaiParam::IsUpToDate() const {
    return false;
}

void UDaiParam::ForceUpdate() {
}


