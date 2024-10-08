#include "AmbientPointLightComponent.h"

UAmbientPointLightComponent::UAmbientPointLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    this->Mobility = EComponentMobility::Static;
}


