#include "BeingActionsComponent.h"
#include "Templates/SubclassOf.h"

UBeingActionsComponent::UBeingActionsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_CurrentAction = NULL;
}

void UBeingActionsComponent::OnCurrentActionEvent(UBeingAction* action, EBeingActionEventType EventType) {
}

bool UBeingActionsComponent::IsActionActive(TSubclassOf<UBeingAction> ActionClass) const {
    return false;
}

bool UBeingActionsComponent::HasAnyAction() const {
    return false;
}

bool UBeingActionsComponent::HasAction(TSubclassOf<UBeingAction> ActionClass) const {
    return false;
}

UBeingAction* UBeingActionsComponent::GetCurrentAction() const {
    return NULL;
}

void UBeingActionsComponent::ClearAllActions() {
}

bool UBeingActionsComponent::AddAction(UBeingAction* action, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator) {
    return false;
}

int32 UBeingActionsComponent::AbortActionsInstigatedBy(const UObject* Instigator) {
    return 0;
}

int32 UBeingActionsComponent::AbortActionsByPriority(TEnumAsByte<EAIRequestPriority::Type> Priority, bool exact) {
    return 0;
}

int32 UBeingActionsComponent::AbortActionsByClass(TSubclassOf<UBeingAction> ActionClass, bool exact) {
    return 0;
}


