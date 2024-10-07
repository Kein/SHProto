#include "SHFlickerGroupStatus.h"

FSHFlickerGroupStatus::FSHFlickerGroupStatus() {
    this->GroupId = 0;
    this->State = ESHFlickerGroupState::Enabled;
    this->Multiplier = 0.00f;
    this->TriggersOnOffSound = false;
}

