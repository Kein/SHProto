#include "SHEddieMeatPushComponent.h"

USHEddieMeatPushComponent::USHEddieMeatPushComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlapUpdateRate = 1.00f;
    this->MeatConveyorRef = NULL;
}

void USHEddieMeatPushComponent::ProcessPlayerCharacterInWorkAreaTick() {
}


