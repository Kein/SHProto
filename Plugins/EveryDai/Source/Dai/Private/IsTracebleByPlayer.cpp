#include "IsTracebleByPlayer.h"

UIsTracebleByPlayer::UIsTracebleByPlayer() {
    this->_TraceLevel = ETraceableByPlayerLevel::TRACE_MINIMAL;
    this->_TraceCondition = ETraceableByPlayerConditions::CONDITION_AT_LEAST_1;
}


