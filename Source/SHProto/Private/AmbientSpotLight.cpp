#include "AmbientSpotLight.h"
#include "AmbientSpotLightComponent.h"

AAmbientSpotLight::AAmbientSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAmbientSpotLightComponent>(TEXT("LightComponent0"))) {
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->SpotLightComponent = (USpotLightComponent*)RootComponent;
}


