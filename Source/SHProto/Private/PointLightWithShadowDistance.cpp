#include "PointLightWithShadowDistance.h"
#include "PointLightWithShadowDistanceComponent.h"

APointLightWithShadowDistance::APointLightWithShadowDistance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPointLightWithShadowDistanceComponent>(TEXT("LightComponent0")))
{
}


