#include "MaiAction.h"

UMaiAction::UMaiAction() {
    this->_SetBehaviorName = false;
}

void UMaiAction::SetActionName(FName Name) {
}

bool UMaiAction::IsActionFinished() const {
    return false;
}

FName UMaiAction::GetActionName() const {
    return NAME_None;
}


