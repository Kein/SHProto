#include "AmbientSpotLight.h"
#include "AmbientSpotLightComponent.h"

AAmbientSpotLight::AAmbientSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAmbientSpotLightComponent>(TEXT("LightComponent0")))
{

}


