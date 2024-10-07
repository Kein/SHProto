#include "BHUD.h"

ABHUD::ABHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->CrosshairTex = NULL;
    this->bDrawFPS = true;
    this->bDrawFocus = true;
}

int32 ABHUD::GetHitches() const {
    return 0;
}

float ABHUD::GetAvgFps() const {
    return 0.0f;
}


