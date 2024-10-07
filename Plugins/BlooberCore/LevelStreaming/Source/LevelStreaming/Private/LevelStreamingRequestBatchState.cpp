#include "LevelStreamingRequestBatchState.h"

FLevelStreamingRequestBatchState::FLevelStreamingRequestBatchState() {
    this->Batch = NULL;
    this->Status = EStreamableLevelStatus::Unloaded;
    this->Priority = 0;
}

