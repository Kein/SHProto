#include "SH2DPingPongRenderer.h"

USH2DPingPongRenderer::USH2DPingPongRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnabledOnQualityLow = false;
    this->EnabledOnQualityMedium = true;
    this->EnabledOnQualityHigh = true;
    this->EnabledOnQualityEpic = true;
    this->ProcessPasses = true;
}


