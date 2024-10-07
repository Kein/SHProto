#include "StreamableLevelDebugWorkItem.h"

FStreamableLevelDebugWorkItem::FStreamableLevelDebugWorkItem() {
    this->Work = ELevelStreamingTaskWorkType::None;
    this->WorkDuration = 0;
    this->Completed = false;
}

