#include "DelayedFlowAction.h"

FDelayedFlowAction::FDelayedFlowAction() {
    this->_Action = NULL;
    this->_WaitForCall = 0.00f;
    this->_Caller = NULL;
}

