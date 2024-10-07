#include "ControlTipsData.h"

FControlTipsData::FControlTipsData() {
    this->Show = false;
    this->Visibility = ETooltipsVisibilityEffects::None;
    this->Size = ETextSize::Tiny;
    this->Font = ETextFont::Default;
}

