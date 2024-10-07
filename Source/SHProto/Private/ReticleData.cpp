#include "ReticleData.h"

FReticleData::FReticleData() {
    this->Visibility = EReticleVisibility::Off;
    this->Thickness = EReticleThickness::Thin;
    this->Opacity = 0.00f;
    this->Color = EReticleColor::White;
}

