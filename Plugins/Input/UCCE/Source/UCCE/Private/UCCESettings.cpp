#include "UCCESettings.h"

UUCCESettings::UUCCESettings() {
    this->GamepadLastUseStartTimeSec = 0.10f;
    this->GamepadLastUseEndTimeSec = 10.00f;
    this->XSXForceFeedbackScale = 1.00f;
    this->Ps5ForceFeedbackScale = 1.00f;
    this->bUseWWiseMotion = true;
    this->MotionAudioDeviceName = TEXT("Wwise_Motion");
    this->bChromaSupported = true;
    this->ForwardPadColor = 10;
}


