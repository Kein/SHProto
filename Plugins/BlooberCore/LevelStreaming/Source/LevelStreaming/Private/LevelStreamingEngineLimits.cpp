#include "LevelStreamingEngineLimits.h"

FLevelStreamingEngineLimits::FLevelStreamingEngineLimits() {
    this->AsyncLoadingTimeLimit = 0.00f;
    this->PriorityAsyncLoadingExtraTime = 0.00f;
    this->ActorInitializationUpdateTimeLimit = 0.00f;
    this->ComponentsRegistrationGranularity = 0;
    this->ComponentUnregisterUpdateTimeLimit = 0.00f;
    this->ComponentsUnregistrationGranularity = 0;
    this->ForceGCAfterLevelStreamedOut = false;
}

