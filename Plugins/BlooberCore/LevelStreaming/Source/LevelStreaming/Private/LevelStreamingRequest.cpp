#include "LevelStreamingRequest.h"

FLevelStreamingRequest::FLevelStreamingRequest() {
    this->ModifyUnspecifiedLevels = false;
    this->UnspecifiedLevelPriority = 0;
    this->UnspecifiedLevelStatus = EStreamableLevelStatus::Unloaded;
    this->AbandonIfLockhart = false;
    this->Requests = NULL;
}

