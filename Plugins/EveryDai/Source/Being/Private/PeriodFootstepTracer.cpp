#include "PeriodFootstepTracer.h"

UPeriodFootstepTracer::UPeriodFootstepTracer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_DefaultPeriod = 0.67f;
    this->_CurrentStance = EBeingWalkingStance::UNDEFINED;
}


