#include "ManagedStreamableLevelBatchHandle.h"

FManagedStreamableLevelBatchHandle::FManagedStreamableLevelBatchHandle() {
    this->Status = EStreamableLevelStatus::Unloaded;
    this->HideTimer = 0.00f;
    this->UnloadTimer = 0.00f;
}

