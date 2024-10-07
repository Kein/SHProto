#include "2DPingPongPass.h"

F2DPingPongPass::F2DPingPongPass() {
    this->TargetIndex = 0;
    this->Clear = false;
    this->ClearAtBeginPlay = false;
    this->bOverride_DTParameterName = false;
    this->bOverride_TimeParameterName = false;
    this->bOverride_FrameIndexName = false;
    this->Material = NULL;
    this->DynamicMaterial = NULL;
    this->Canvas[0] = NULL;
    this->Canvas[1] = NULL;
}

