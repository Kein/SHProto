#include "SHRaycastDetectableComponent.h"
#include "EDetectableShapeDiscoveryMethod.h"

USHRaycastDetectableComponent::USHRaycastDetectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DiscoveryMethod = EDetectableShapeDiscoveryMethod::Automatic;
    this->ChannelConfigs.AddDefaulted(2);
}


