#include "ForceOverTime.h"

FForceOverTime::FForceOverTime() {
    this->bone = EBones::Root;
    this->Duration = 0.00f;
    this->Time = 0.00f;
    this->bDamp = false;
    this->Damp = 0.00f;
}

