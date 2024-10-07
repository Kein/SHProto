#include "SHDebugSettings.h"

USHDebugSettings::USHDebugSettings() {
    this->GhostKeys.AddDefaulted(1);
    this->DebugCheckPointKeys.AddDefaulted(1);
    this->SpeedUpTimeDilation = 4.00f;
    this->SlowDownTimeDilation = 0.00f;
    this->SpeedUpKeys.AddDefaulted(1);
    this->SlowDownKeys.AddDefaulted(1);
}


