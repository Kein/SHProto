#include "SHWaterManagerComponent.h"

USHWaterManagerComponent::USHWaterManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrackedActor = NULL;
}

void USHWaterManagerComponent::SHDebug_WaterInteraction_DrawDebug() {
}

ASHWaterVolume* USHWaterManagerComponent::GetSimulatingWaterVolume() const {
    return NULL;
}


