#include "AmbientRectLight.h"
#include "AmbientRectLightComponent.h"

AAmbientRectLight::AAmbientRectLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAmbientRectLightComponent>(TEXT("LightComponent0"))) {
    const FProperty* p_LightComponent = GetClass()->FindPropertyByName("LightComponent");
    (*p_LightComponent->ContainerPtrToValuePtr<ULightComponent*>(this)) = (ULightComponent*)RootComponent;
    this->RectLightComponent = (URectLightComponent*)RootComponent;
}


