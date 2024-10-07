#include "MaiSenseConfig_Hearing.h"

UMaiSenseConfig_Hearing::UMaiSenseConfig_Hearing() {
    this->DistanceCurve = NULL;
    this->HearingRange = 1500.00f;
    this->HearingRangeThroughWalls = 0.00f;
    this->HearingThroughWalls = false;
    this->LoSHearingRange = 0.00f;
    this->bUseLoSHearing = false;
}


