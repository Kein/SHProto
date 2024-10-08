#include "SpotLightWithShadowDistance.h"
#include "SpotLightWithShadowDistanceComponent.h"

ASpotLightWithShadowDistance::ASpotLightWithShadowDistance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<USpotLightWithShadowDistanceComponent>(TEXT("LightComponent0")))
{
}
