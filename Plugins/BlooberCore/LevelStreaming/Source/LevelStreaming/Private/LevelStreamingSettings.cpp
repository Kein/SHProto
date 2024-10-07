#include "LevelStreamingSettings.h"

ULevelStreamingSettings::ULevelStreamingSettings() {
    this->DelayIdleEvents = false;
    this->Slots.AddDefaulted(6);
    this->ForceGCWhenLevelsArePendingPurge = true;
    this->FullPurgeWhenForcingGC = false;
    this->NumberOfPendingLevelsRequiredForGC = 1;
    this->ShortestDelayBetweenForcingGC = 1.00f;
    this->ShowDebugWidgetKeys.AddDefaulted(1);
}


