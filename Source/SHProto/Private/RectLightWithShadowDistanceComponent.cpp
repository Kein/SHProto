#include "RectLightWithShadowDistanceComponent.h"

URectLightWithShadowDistanceComponent::URectLightWithShadowDistanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShadowMaxDrawDistance = 0.00f;
    this->ShadowMaxDistanceFadeRange = 0.00f;
}


