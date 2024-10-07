#include "AmbientSpotLightComponent.h"

UAmbientSpotLightComponent::UAmbientSpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
}


