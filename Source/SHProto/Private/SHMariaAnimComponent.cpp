#include "SHMariaAnimComponent.h"

USHMariaAnimComponent::USHMariaAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLocomotionAnimInstClass = NULL;
    this->InjuredLocomotionAnimInstClass = NULL;
    this->InDangerLocomotionAnimInstClass = NULL;
}

void USHMariaAnimComponent::RefreshAnimGraphs() {
}


