#include "LevelStreamingRequestElement.h"

FLevelStreamingRequestElement::FLevelStreamingRequestElement() {
    this->Status = EStreamableLevelStatus::Unloaded;
    this->Priority = 0;
    this->AbandonIfLockhartElem = false;
}

