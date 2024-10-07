#include "MaiBTTask_State.h"

UMaiBTTask_State::UMaiBTTask_State() {
    this->NodeName = TEXT("State");
    this->_State = NULL;
    this->_Decorated = false;
}

void UMaiBTTask_State::OnStateStatusChanged(EStateStatus Status) {
}


