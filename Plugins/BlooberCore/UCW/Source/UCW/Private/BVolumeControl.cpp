#include "BVolumeControl.h"

UBVolumeControl::UBVolumeControl() {
    this->MouseUsesStep = false;
    this->StepSize = 0.01f;
    this->Volume = 1.00f;
    this->Muted = false;
    this->IsFocusable = true;
    this->RTPCParameter = NULL;
    this->bHasCustomMusic = false;
    this->HoveredAkEvent = NULL;
    this->UnhoveredAkEvent = NULL;
    this->ChangedAkEvent = NULL;
    this->ControllLabelVisibility = true;
    this->Label = NULL;
}

void UBVolumeControl::SetVolume(float InVolume) {
}

void UBVolumeControl::SetMuted(bool InValue) {
}

void UBVolumeControl::SetLabel(UWidget* InContent) {
}

bool UBVolumeControl::IsMuted() const {
    return false;
}

float UBVolumeControl::GetVolume() const {
    return 0.0f;
}


