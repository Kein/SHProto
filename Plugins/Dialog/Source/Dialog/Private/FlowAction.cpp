#include "FlowAction.h"
#include "Templates/SubclassOf.h"

UFlowAction::UFlowAction() {
    this->_Owner = NULL;
    this->_Delay = 0.00f;
    this->_DoOnSkip = true;
    this->_StopOnExit = true;
    this->_StopOnContextFinish = false;
    this->_OverrideDoOnSkip = true;
    this->_CreateInstance = false;
    this->_NotifyTick = false;
    this->_NotifyStop = false;
}

void UFlowAction::GrabTargets(UObject* Context, TSubclassOf<AActor> aclass, TArray<AActor*>& Actors) const {
}

UFlowItem* UFlowAction::GetItemOwner() const {
    return NULL;
}

void UFlowAction::ActionFinish() {
}


