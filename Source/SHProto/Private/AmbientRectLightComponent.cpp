#include "AmbientRectLightComponent.h"

UAmbientRectLightComponent::UAmbientRectLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
}


