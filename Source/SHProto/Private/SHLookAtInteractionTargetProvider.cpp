#include "SHLookAtInteractionTargetProvider.h"

USHLookAtInteractionTargetProvider::USHLookAtInteractionTargetProvider() {
    this->MaxDistance = 200.00f;
    this->MaxAngle = 90.00f;
    this->AngleScoreCurve = NULL;
    this->InteractionTraceRetries = 5;
    this->ActiveInteractionComponent = NULL;
    this->LastSelectedComponent = NULL;
}


