#include "SHAnimFootIKSubcompSettings.h"

FSHAnimFootIKSubcompSettings::FSHAnimFootIKSubcompSettings() {
    this->FeetIKHeight = 0.00f;
    this->MoveFeetOnlyInZAxis = false;
    this->UseSweepInsteadOfLineTrace = false;
    this->UseSingleTraceLogic = false;
    this->TraceHalfDistance = 0.00f;
    this->FootLocationOffsetLimit = 0.00f;
    this->bDisableUpdatesThrottling = false;
}

