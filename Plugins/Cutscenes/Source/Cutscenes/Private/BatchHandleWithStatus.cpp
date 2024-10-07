#include "BatchHandleWithStatus.h"

FBatchHandleWithStatus::FBatchHandleWithStatus() {
    this->ExpectedStatus = EStreamableLevelStatus::Unloaded;
}

