#include "AmbientRectLight.h"
#include "AmbientRectLightComponent.h"

AAmbientRectLight::AAmbientRectLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAmbientRectLightComponent>(TEXT("LightComponent0")))
{
}



