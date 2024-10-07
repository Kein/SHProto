#include "AmbientPointLight.h"
#include "AmbientPointLightComponent.h"

AAmbientPointLight::AAmbientPointLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAmbientPointLightComponent>(TEXT("LightComponent0"))) {
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->PointLightComponent = (UPointLightComponent*)RootComponent;
}


