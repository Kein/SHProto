#include "BeingState.h"
#include "Templates/SubclassOf.h"

UBeingState::UBeingState() {
    this->_Status = EStateStatus::NotStarted;
    this->_CurrSubState = -1;
    this->_Owner = NULL;
    this->_StateMachine = NULL;
    this->_AutoActivate = false;
    this->_NeedDeactivate = false;
    this->_LifeTime = 0.00f;
    this->_CooldownTimer = 0.00f;
    this->_TimeOut = 0.00f;
    this->_Cooldown = 0.00f;
}






bool UBeingState::ProcessSubStates(float DeltaSeconds) {
    return false;
}

bool UBeingState::IsRunning() const {
    return false;
}


bool UBeingState::IsFinished() const {
    return false;
}

int32 UBeingState::GetSubStateNum() const {
    return 0;
}

UBeingState* UBeingState::GetSubState(int32 Index) const {
    return NULL;
}

EStateStatus UBeingState::GetStatus() const {
    return EStateStatus::NotStarted;
}

UBeingStatesComponent* UBeingState::GetStatesComponent() const {
    return NULL;
}


AActor* UBeingState::GetOwner() const {
    return NULL;
}

void UBeingState::FinishState(EStateStatus Status) {
}

UBeingState* UBeingState::createState(UObject* WorldContextObject, TSubclassOf<UBeingState> Class) {
    return NULL;
}

void UBeingState::ConditionalActivateState() {
}

void UBeingState::ActivateState() {
}


