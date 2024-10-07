#include "BeingAction.h"
#include "Templates/SubclassOf.h"

UBeingAction::UBeingAction() {
    this->ChildAction = NULL;
    this->OwnerComponent = NULL;
    this->Instigator = NULL;
}

bool UBeingAction::IsFinished() const {
    return false;
}

bool UBeingAction::IsBeingAborted() const {
    return false;
}

bool UBeingAction::IsActive() const {
    return false;
}

void UBeingAction::Finish(TEnumAsByte<EPawnActionResult::Type> WithResult) {
}

UBeingAction* UBeingAction::CreateActionInstance(UObject* WorldContextObject, TSubclassOf<UBeingAction> ActionClass) {
    return NULL;
}





TEnumAsByte<EPawnActionAbortState::Type> UBeingAction::Abort(bool Force) {
    return EPawnActionAbortState::NeverStarted;
}


