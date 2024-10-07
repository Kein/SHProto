#include "SHAnimHandIKSubcomp.h"

USHAnimHandIKSubcomp::USHAnimHandIKSubcomp() {
}

void USHAnimHandIKSubcomp::StopRightHandIK(float interpSpeed) {
}

void USHAnimHandIKSubcomp::StopLeftHandIK(float interpSpeed) {
}

void USHAnimHandIKSubcomp::StopBothIK(float interpSpeed) {
}

void USHAnimHandIKSubcomp::SetRightHandLocation(const FVector InLoc, float interpSpeed, bool SetFullAlpha) {
}

void USHAnimHandIKSubcomp::SetLeftHandLocation(const FVector InLoc, float interpSpeed, bool SetFullAlpha) {
}

bool USHAnimHandIKSubcomp::IsRightHandIKEnabled() const {
    return false;
}

bool USHAnimHandIKSubcomp::IsLeftHandIKEnabled() const {
    return false;
}

FVector USHAnimHandIKSubcomp::GetRightHandLocation() const {
    return FVector{};
}

float USHAnimHandIKSubcomp::GetRightHandAlpha() const {
    return 0.0f;
}

FVector USHAnimHandIKSubcomp::GetLeftHandLocation() const {
    return FVector{};
}

float USHAnimHandIKSubcomp::GetLeftHandAlpha() const {
    return 0.0f;
}


