#include "SHStagedAnimActionExecutive.h"

USHStagedAnimActionExecutive::USHStagedAnimActionExecutive() {
    this->GameplayStagedAnimInstClass = NULL;
    this->LinkedStagedAnimInst = NULL;
}






USHBaseStagedAnimInstance* USHStagedAnimActionExecutive::GetLinkedStagedAnimInst() {
    return NULL;
}

bool USHStagedAnimActionExecutive::AdvanceStageRequest() {
    return false;
}


