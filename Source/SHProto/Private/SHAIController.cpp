#include "SHAIController.h"

ASHAIController::ASHAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_BehaviorType = ESHAIBehaviors::Unknown;
    this->_ChanceToBeAttacked = 0;
    this->AggroMeterComponent = NULL;
}

void ASHAIController::SetBehaviorType(ESHAIBehaviors Behavior) {
}

bool ASHAIController::IsInLockedState() const {
    return false;
}

ESHAIBehaviors ASHAIController::GetBehaviorType() const {
    return ESHAIBehaviors::Unknown;
}

void ASHAIController::ClearBehaviorType(ESHAIBehaviors Behavior) {
}

void ASHAIController::ChangeLockedState(const bool bNewLockedState, const UObject* Object) {
}


