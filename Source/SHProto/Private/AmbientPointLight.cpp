#include "AmbientPointLight.h"
#include "AmbientPointLightComponent.h"

AAmbientPointLight::AAmbientPointLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAmbientPointLightComponent>(TEXT("LightComponent0")))
{

}



