#include "SaveSlotInfo.h"

FSaveSlotInfo::FSaveSlotInfo() {
    this->SlotIndex = 0;
    this->UserIndex = 0;
    this->ScreenShot = NULL;
    this->IsEmpty = false;
    this->IsAuto = false;
    this->IsLastPlayedGame = false;
    this->IsDisabled = false;
    this->IsVisible = false;
}

