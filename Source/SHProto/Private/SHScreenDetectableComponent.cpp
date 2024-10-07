#include "SHScreenDetectableComponent.h"
#include "EDetectableShapeDiscoveryMethod.h"

USHScreenDetectableComponent::USHScreenDetectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DiscoveryMethod = EDetectableShapeDiscoveryMethod::Automatic;
    this->TraceChannel = ECC_GameTraceChannel1;
    this->LimitTraceAngle = true;
}


