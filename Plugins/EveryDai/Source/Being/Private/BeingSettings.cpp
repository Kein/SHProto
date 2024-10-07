#include "BeingSettings.h"

UBeingSettings::UBeingSettings() {
    this->_WalkingStanceCount = 12;
    this->_WalkingStances.AddDefaulted(12);
    this->_DebugSurface = SurfaceType_Default;
    this->_DebugSoundMovement = ESoundMovement::WALK;
    this->_DebugFootSockets[0] = TEXT("foot_l_bn");
    this->_DebugFootSockets[1] = TEXT("foot_l_bn");
    this->_DebugFootSockets[2] = TEXT("foot_l_bn");
    this->_DebugFootSockets[3] = TEXT("foot_l_bn");
    this->_DebugFootSockets[4] = TEXT("foot_l_bn");
}


